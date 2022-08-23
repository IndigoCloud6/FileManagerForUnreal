// Copyright Epic Games, Inc. All Rights Reserved.

#include "FileManagerForUnrealBPLibrary.h"
#include "FileManagerForUnreal.h"

UFileManagerForUnrealBPLibrary::UFileManagerForUnrealBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UFileManagerForUnrealBPLibrary::FileManagerForUnrealSampleFunction(float Param)
{
	return -1;
}

TArray<FString> UFileManagerForUnrealBPLibrary::OpenFile()
{
	TArray<FString> FilePath; //选择文件路径
	FString fileType = TEXT("*.*"); //过滤文件类型
	FString defaultPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()); //文件选择窗口默认开启路径
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	bool bSuccess = DesktopPlatform->OpenFileDialog(nullptr, TEXT("打开文件"), defaultPath, TEXT(""), *fileType, EFileDialogFlags::None, FilePath);

	for (auto& name : FilePath)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("%s"), *name);
	}
	if (bSuccess)
	{
		//文件选择成功，文件路径 path 
		UE_LOG(LogTemp, Warning, TEXT("Success"));
	}
	return FilePath;
}

FString UFileManagerForUnrealBPLibrary::ReadFile(FString path)
{
	FString resultString;
	FFileHelper::LoadFileToString(resultString, *path);
	return resultString;
}
///
bool UFileManagerForUnrealBPLibrary::WriteFile(FString saveFile, FString path)
{
	bool success;
	success = FFileHelper::SaveStringToFile(saveFile, *path);
	return success;
}

TArray<FString> UFileManagerForUnrealBPLibrary::ReadFileArray(FString path)
{
	TArray<FString> results;
	FFileHelper::LoadFileToStringArray(results, *path);
	return results;
}

bool UFileManagerForUnrealBPLibrary::WriteFileArray(TArray<FString> saveFile, FString path)
{
	return FFileHelper::SaveStringArrayToFile(saveFile, *path);
}

FString UFileManagerForUnrealBPLibrary::GetFilePath(FString path)
{
	FString Result;
	Result = FPaths::GetPath(*path);
	return Result;
}

FString UFileManagerForUnrealBPLibrary::GetFileName(FString InPath, bool bRemovePath)
{
	return FPaths::GetBaseFilename(*InPath, bRemovePath);
}

FString UFileManagerForUnrealBPLibrary::GetFileExtension(FString InPath, bool bIncludeDot)
{
	return FPaths::GetExtension(*InPath, bIncludeDot);
}

void UFileManagerForUnrealBPLibrary::CreatFolder(FString FolderName)
{
	FString Path = FPaths::ProjectDir() / *FolderName;
	Path = FPaths::ConvertRelativePathToFull(*Path);
	FPlatformFileManager::Get().GetPlatformFile().CreateDirectoryTree(*Path);
}


void UFileManagerForUnrealBPLibrary::DeleteFolder(FString FolderName)
{
	FString Path = FPaths::ProjectDir() / *FolderName;
	Path = FPaths::ConvertRelativePathToFull(*Path);
	FPlatformFileManager::Get().Get().GetPlatformFile().DeleteDirectoryRecursively(*Path);
}

bool UFileManagerForUnrealBPLibrary::MoveFileTo(FString To, FString From)
{

	return IFileManager::Get().Move(*To, *From);
}

TArray<FString> UFileManagerForUnrealBPLibrary::FindFolder(FString Path, FString Filter, bool Files, bool Directory)
{
	TArray<FString> FilePathList;
	FilePathList.Empty();
	FFileManagerGeneric::Get().FindFilesRecursive(FilePathList, *Path, *Filter, Files, Directory);
	return FilePathList;

}
//


TArray<FString> UFileManagerForUnrealBPLibrary::GetFolderFiles(FString Path)
{
	TArray<FString> Files;
	FPaths::NormalizeDirectoryName(Path);
	IFileManager& FileManager = IFileManager::Get();
	FString FinalPath = Path / TEXT("*");
	FileManager.FindFiles(Files, *FinalPath, true, true);
	return Files;
}


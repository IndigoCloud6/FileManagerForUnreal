// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Developer/DesktopPlatform/Public/IDesktopPlatform.h"
#include "Runtime/Core/Public/HAL/FileManagerGeneric.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileManagerForUnrealBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UFileManagerForUnrealBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "FileManagerForUnreal sample test testing"), Category = "FileManagerForUnrealTesting")
	static float FileManagerForUnrealSampleFunction(float Param);

	//���ļ�
	UFUNCTION(BlueprintCallable, DisplayName = "OpenFile", Category = "File")
		static TArray<FString> OpenFile();
	//��ȡ�ļ�(�ַ�����)
		UFUNCTION(BlueprintCallable, DisplayName = "ReadFileArray", Category = "File")
		static TArray<FString> ReadFileArray(FString path);
	//д���ļ�(�ַ�����)
	UFUNCTION(BlueprintCallable, DisplayName = "WriteFileArray", Category = "File")
		static bool WriteFileArray(TArray<FString> saveFile, FString path);
	//��ȡ�ļ�(�ַ���)
	UFUNCTION(BlueprintCallable, DisplayName = "ReadFile", Category = "File")
		static FString ReadFile(FString path);
	//д���ļ�(�ַ���)
	UFUNCTION(BlueprintCallable, DisplayName = "WriteFile", Category = "File")
		static bool WriteFile(FString saveFile, FString path);
	//��ȡ�ļ�����·��
	UFUNCTION(BlueprintCallable, DisplayName = "Get FilePath", Category = "File")
		static FString GetFilePath(FString path);
	//��ȡ�ļ�����������׺
	UFUNCTION(BlueprintCallable, DisplayName = "GetFileName", Category = "File")
		static FString GetFileName(FString InPath, bool bRemovePath);
	//��ȡ�ļ���׺
	UFUNCTION(BlueprintCallable, DisplayName = "GetFileExtension", Category = "File")
		static FString GetFileExtension(FString InPath, bool bIncludeDot);
	//����һ���ļ���
	UFUNCTION(BlueprintCallable, DisplayName = "CreateFolder", Category = "File")
		static void CreatFolder(FString FolderName);
	//ɾ��һ���ļ���
	UFUNCTION(BlueprintCallable, DisplayName = "DeleteFolder", Category = "File")
		static void DeleteFolder(FString FolderName);
	//�ƶ��ļ�
	UFUNCTION(BlueprintCallable, Category = "MoveFileTo")
		static bool MoveFileTo(FString To, FString From);
	//�����ļ�Ŀ¼�µ������ļ�
	UFUNCTION(BlueprintCallable, DisplayName = "FindFolder", Category = "File")
		static TArray<FString> FindFolder(FString Path, FString Filter, bool Files, bool Directory);
	//�����ļ�Ŀ¼�������ļ��޷�ɾѡ����
	UFUNCTION(BlueprintCallable, DisplayName = "GetFolderFiles", Category = "File")
		static TArray<FString> GetFolderFiles(FString Path);
};

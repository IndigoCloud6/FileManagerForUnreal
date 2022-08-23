// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileManagerForUnreal/Public/FileManagerForUnrealBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileManagerForUnrealBPLibrary() {}
// Cross Module References
	FILEMANAGERFORUNREAL_API UClass* Z_Construct_UClass_UFileManagerForUnrealBPLibrary_NoRegister();
	FILEMANAGERFORUNREAL_API UClass* Z_Construct_UClass_UFileManagerForUnrealBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FileManagerForUnreal();
// End Cross Module References
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execGetFolderFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileManagerForUnrealBPLibrary::GetFolderFiles(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execFindFolder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
		P_GET_UBOOL(Z_Param_Files);
		P_GET_UBOOL(Z_Param_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileManagerForUnrealBPLibrary::FindFolder(Z_Param_Path,Z_Param_Filter,Z_Param_Files,Z_Param_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execMoveFileTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_To);
		P_GET_PROPERTY(FStrProperty,Z_Param_From);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileManagerForUnrealBPLibrary::MoveFileTo(Z_Param_To,Z_Param_From);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execDeleteFolder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileManagerForUnrealBPLibrary::DeleteFolder(Z_Param_FolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execCreatFolder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileManagerForUnrealBPLibrary::CreatFolder(Z_Param_FolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execGetFileExtension)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_UBOOL(Z_Param_bIncludeDot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileManagerForUnrealBPLibrary::GetFileExtension(Z_Param_InPath,Z_Param_bIncludeDot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execGetFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_UBOOL(Z_Param_bRemovePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileManagerForUnrealBPLibrary::GetFileName(Z_Param_InPath,Z_Param_bRemovePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execGetFilePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileManagerForUnrealBPLibrary::GetFilePath(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execWriteFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_saveFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileManagerForUnrealBPLibrary::WriteFile(Z_Param_saveFile,Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execReadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileManagerForUnrealBPLibrary::ReadFile(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execWriteFileArray)
	{
		P_GET_TARRAY(FString,Z_Param_saveFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileManagerForUnrealBPLibrary::WriteFileArray(Z_Param_saveFile,Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execReadFileArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileManagerForUnrealBPLibrary::ReadFileArray(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execOpenFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFileManagerForUnrealBPLibrary::OpenFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileManagerForUnrealBPLibrary::execFileManagerForUnrealSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFileManagerForUnrealBPLibrary::FileManagerForUnrealSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UFileManagerForUnrealBPLibrary::StaticRegisterNativesUFileManagerForUnrealBPLibrary()
	{
		UClass* Class = UFileManagerForUnrealBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatFolder", &UFileManagerForUnrealBPLibrary::execCreatFolder },
			{ "DeleteFolder", &UFileManagerForUnrealBPLibrary::execDeleteFolder },
			{ "FileManagerForUnrealSampleFunction", &UFileManagerForUnrealBPLibrary::execFileManagerForUnrealSampleFunction },
			{ "FindFolder", &UFileManagerForUnrealBPLibrary::execFindFolder },
			{ "GetFileExtension", &UFileManagerForUnrealBPLibrary::execGetFileExtension },
			{ "GetFileName", &UFileManagerForUnrealBPLibrary::execGetFileName },
			{ "GetFilePath", &UFileManagerForUnrealBPLibrary::execGetFilePath },
			{ "GetFolderFiles", &UFileManagerForUnrealBPLibrary::execGetFolderFiles },
			{ "MoveFileTo", &UFileManagerForUnrealBPLibrary::execMoveFileTo },
			{ "OpenFile", &UFileManagerForUnrealBPLibrary::execOpenFile },
			{ "ReadFile", &UFileManagerForUnrealBPLibrary::execReadFile },
			{ "ReadFileArray", &UFileManagerForUnrealBPLibrary::execReadFileArray },
			{ "WriteFile", &UFileManagerForUnrealBPLibrary::execWriteFile },
			{ "WriteFileArray", &UFileManagerForUnrealBPLibrary::execWriteFileArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventCreatFolder_Parms
		{
			FString FolderName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventCreatFolder_Parms, FolderName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::NewProp_FolderName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//????\xd2\xbb???\xc4\xbc???\n" },
		{ "DisplayName", "CreateFolder" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "????\xd2\xbb???\xc4\xbc???" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "CreatFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::FileManagerForUnrealBPLibrary_eventCreatFolder_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventDeleteFolder_Parms
		{
			FString FolderName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventDeleteFolder_Parms, FolderName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::NewProp_FolderName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//\xc9\xbe??\xd2\xbb???\xc4\xbc???\n" },
		{ "DisplayName", "DeleteFolder" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "\xc9\xbe??\xd2\xbb???\xc4\xbc???" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "DeleteFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::FileManagerForUnrealBPLibrary_eventDeleteFolder_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventFileManagerForUnrealSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventFileManagerForUnrealSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventFileManagerForUnrealSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManagerForUnrealTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "FileManagerForUnreal sample test testing" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "FileManagerForUnrealSampleFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::FileManagerForUnrealBPLibrary_eventFileManagerForUnrealSampleFunction_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventFindFolder_Parms
		{
			FString Path;
			FString Filter;
			bool Files;
			bool Directory;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
		static void NewProp_Files_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Files;
		static void NewProp_Directory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Directory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventFindFolder_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventFindFolder_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Files_SetBit(void* Obj)
	{
		((FileManagerForUnrealBPLibrary_eventFindFolder_Parms*)Obj)->Files = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManagerForUnrealBPLibrary_eventFindFolder_Parms), &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Files_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Directory_SetBit(void* Obj)
	{
		((FileManagerForUnrealBPLibrary_eventFindFolder_Parms*)Obj)->Directory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManagerForUnrealBPLibrary_eventFindFolder_Parms), &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Directory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventFindFolder_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//?????\xc4\xbc?\xc4\xbf\xc2\xbc?\xc2\xb5??????\xc4\xbc?\n" },
		{ "DisplayName", "FindFolder" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "?????\xc4\xbc?\xc4\xbf\xc2\xbc?\xc2\xb5??????\xc4\xbc?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "FindFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::FileManagerForUnrealBPLibrary_eventFindFolder_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventGetFileExtension_Parms
		{
			FString InPath;
			bool bIncludeDot;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
		static void NewProp_bIncludeDot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDot;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventGetFileExtension_Parms, InPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::NewProp_bIncludeDot_SetBit(void* Obj)
	{
		((FileManagerForUnrealBPLibrary_eventGetFileExtension_Parms*)Obj)->bIncludeDot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::NewProp_bIncludeDot = { "bIncludeDot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManagerForUnrealBPLibrary_eventGetFileExtension_Parms), &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::NewProp_bIncludeDot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventGetFileExtension_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::NewProp_InPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::NewProp_bIncludeDot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//??\xc8\xa1?\xc4\xbc???\xd7\xba\n" },
		{ "DisplayName", "GetFileExtension" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "??\xc8\xa1?\xc4\xbc???\xd7\xba" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "GetFileExtension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::FileManagerForUnrealBPLibrary_eventGetFileExtension_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventGetFileName_Parms
		{
			FString InPath;
			bool bRemovePath;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
		static void NewProp_bRemovePath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemovePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventGetFileName_Parms, InPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::NewProp_bRemovePath_SetBit(void* Obj)
	{
		((FileManagerForUnrealBPLibrary_eventGetFileName_Parms*)Obj)->bRemovePath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::NewProp_bRemovePath = { "bRemovePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManagerForUnrealBPLibrary_eventGetFileName_Parms), &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::NewProp_bRemovePath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventGetFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::NewProp_InPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::NewProp_bRemovePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//??\xc8\xa1?\xc4\xbc???????\xd7\xba\n" },
		{ "DisplayName", "GetFileName" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "??\xc8\xa1?\xc4\xbc???????\xd7\xba" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "GetFileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::FileManagerForUnrealBPLibrary_eventGetFileName_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventGetFilePath_Parms
		{
			FString path;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventGetFilePath_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventGetFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//??\xc8\xa1?\xc4\xbc?????\xc2\xb7??\n" },
		{ "DisplayName", "Get FilePath" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "??\xc8\xa1?\xc4\xbc?????\xc2\xb7??" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "GetFilePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::FileManagerForUnrealBPLibrary_eventGetFilePath_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventGetFolderFiles_Parms
		{
			FString Path;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventGetFolderFiles_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventGetFolderFiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//?????\xc4\xbc?\xc4\xbf\xc2\xbc???????\xc4\xbc??\xde\xb7?\xc9\xbe\xd1\xa1????\n" },
		{ "DisplayName", "GetFolderFiles" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "?????\xc4\xbc?\xc4\xbf\xc2\xbc???????\xc4\xbc??\xde\xb7?\xc9\xbe\xd1\xa1????" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "GetFolderFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::FileManagerForUnrealBPLibrary_eventGetFolderFiles_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventMoveFileTo_Parms
		{
			FString To;
			FString From;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_To;
		static const UECodeGen_Private::FStrPropertyParams NewProp_From;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventMoveFileTo_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventMoveFileTo_Parms, From), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManagerForUnrealBPLibrary_eventMoveFileTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManagerForUnrealBPLibrary_eventMoveFileTo_Parms), &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MoveFileTo" },
		{ "Comment", "//?\xc6\xb6??\xc4\xbc?\n" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "?\xc6\xb6??\xc4\xbc?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "MoveFileTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::FileManagerForUnrealBPLibrary_eventMoveFileTo_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventOpenFile_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventOpenFile_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//?????\xc4\xbc?\n" },
		{ "DisplayName", "OpenFile" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "?????\xc4\xbc?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "OpenFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::FileManagerForUnrealBPLibrary_eventOpenFile_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventReadFile_Parms
		{
			FString path;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventReadFile_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventReadFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//??\xc8\xa1?\xc4\xbc?(?\xd6\xb7???)\n" },
		{ "DisplayName", "ReadFile" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "??\xc8\xa1?\xc4\xbc?(?\xd6\xb7???)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "ReadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::FileManagerForUnrealBPLibrary_eventReadFile_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventReadFileArray_Parms
		{
			FString path;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventReadFileArray_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventReadFileArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//??\xc8\xa1?\xc4\xbc?(?\xd6\xb7?????)\n" },
		{ "DisplayName", "ReadFileArray" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "??\xc8\xa1?\xc4\xbc?(?\xd6\xb7?????)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "ReadFileArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::FileManagerForUnrealBPLibrary_eventReadFileArray_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventWriteFile_Parms
		{
			FString saveFile;
			FString path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_saveFile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::NewProp_saveFile = { "saveFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventWriteFile_Parms, saveFile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventWriteFile_Parms, path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManagerForUnrealBPLibrary_eventWriteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManagerForUnrealBPLibrary_eventWriteFile_Parms), &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::NewProp_saveFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//\xd0\xb4???\xc4\xbc?(?\xd6\xb7???)\n" },
		{ "DisplayName", "WriteFile" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "\xd0\xb4???\xc4\xbc?(?\xd6\xb7???)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "WriteFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::FileManagerForUnrealBPLibrary_eventWriteFile_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics
	{
		struct FileManagerForUnrealBPLibrary_eventWriteFileArray_Parms
		{
			TArray<FString> saveFile;
			FString path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_saveFile_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_saveFile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::NewProp_saveFile_Inner = { "saveFile", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::NewProp_saveFile = { "saveFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventWriteFileArray_Parms, saveFile), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManagerForUnrealBPLibrary_eventWriteFileArray_Parms, path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManagerForUnrealBPLibrary_eventWriteFileArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManagerForUnrealBPLibrary_eventWriteFileArray_Parms), &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::NewProp_saveFile_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::NewProp_saveFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "File" },
		{ "Comment", "//\xd0\xb4???\xc4\xbc?(?\xd6\xb7?????)\n" },
		{ "DisplayName", "WriteFileArray" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "\xd0\xb4???\xc4\xbc?(?\xd6\xb7?????)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManagerForUnrealBPLibrary, nullptr, "WriteFileArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::FileManagerForUnrealBPLibrary_eventWriteFileArray_Parms), Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileManagerForUnrealBPLibrary);
	UClass* Z_Construct_UClass_UFileManagerForUnrealBPLibrary_NoRegister()
	{
		return UFileManagerForUnrealBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFileManagerForUnrealBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileManagerForUnrealBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FileManagerForUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileManagerForUnrealBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_CreatFolder, "CreatFolder" }, // 2099501152
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_DeleteFolder, "DeleteFolder" }, // 811009256
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FileManagerForUnrealSampleFunction, "FileManagerForUnrealSampleFunction" }, // 3462474959
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_FindFolder, "FindFolder" }, // 1730286253
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileExtension, "GetFileExtension" }, // 3299751527
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFileName, "GetFileName" }, // 345823719
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFilePath, "GetFilePath" }, // 3135724225
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_GetFolderFiles, "GetFolderFiles" }, // 927849526
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_MoveFileTo, "MoveFileTo" }, // 1331824070
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_OpenFile, "OpenFile" }, // 3175494063
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFile, "ReadFile" }, // 3121078573
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_ReadFileArray, "ReadFileArray" }, // 2065875843
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFile, "WriteFile" }, // 3308195609
		{ &Z_Construct_UFunction_UFileManagerForUnrealBPLibrary_WriteFileArray, "WriteFileArray" }, // 2364221295
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileManagerForUnrealBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "FileManagerForUnrealBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FileManagerForUnrealBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileManagerForUnrealBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileManagerForUnrealBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileManagerForUnrealBPLibrary_Statics::ClassParams = {
		&UFileManagerForUnrealBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileManagerForUnrealBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileManagerForUnrealBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileManagerForUnrealBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UFileManagerForUnrealBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileManagerForUnrealBPLibrary.OuterSingleton, Z_Construct_UClass_UFileManagerForUnrealBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileManagerForUnrealBPLibrary.OuterSingleton;
	}
	template<> FILEMANAGERFORUNREAL_API UClass* StaticClass<UFileManagerForUnrealBPLibrary>()
	{
		return UFileManagerForUnrealBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileManagerForUnrealBPLibrary);
	struct Z_CompiledInDeferFile_FID_my_c_Plugins_FileManagerForUnreal_Source_FileManagerForUnreal_Public_FileManagerForUnrealBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_my_c_Plugins_FileManagerForUnreal_Source_FileManagerForUnreal_Public_FileManagerForUnrealBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileManagerForUnrealBPLibrary, UFileManagerForUnrealBPLibrary::StaticClass, TEXT("UFileManagerForUnrealBPLibrary"), &Z_Registration_Info_UClass_UFileManagerForUnrealBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileManagerForUnrealBPLibrary), 3961006323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_my_c_Plugins_FileManagerForUnreal_Source_FileManagerForUnreal_Public_FileManagerForUnrealBPLibrary_h_2375107016(TEXT("/Script/FileManagerForUnreal"),
		Z_CompiledInDeferFile_FID_my_c_Plugins_FileManagerForUnreal_Source_FileManagerForUnreal_Public_FileManagerForUnrealBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_my_c_Plugins_FileManagerForUnreal_Source_FileManagerForUnreal_Public_FileManagerForUnrealBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

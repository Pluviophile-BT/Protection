/*
* Author: Anansi
* Date: 2021/12/8
* ע������������ֵд�뱣��
*/
#pragma once
#include <ntifs.h>

#define REG_TAG "rootkit"

NTSTATUS UnloadDriver(
	_In_ PDRIVER_OBJECT pDriver_Obj
);

/// <summary>
/// �ص�����
/// </summary>
/// <param name="CallbackContext">�����Ĳ���</param>
/// <param name="Argument1">ע����������</param>
/// <param name="Argument2">ע���������Ϣ�ṹ</param>
/// <returns></returns>
NTSTATUS RegistryCallback(
	_In_ PVOID CallbackContext,
	_In_ PVOID Argument1,
	_In_ PVOID Argument2
);


BOOLEAN GetNameForRegistryObject(
	_Out_	 PUNICODE_STRING pRegistryPath,
	_In_	 PUNICODE_STRING pPartialRegistryPath,
	_In_	 PVOID pRegistryObject
);

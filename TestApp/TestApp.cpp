// TestApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <windows.h>
#include "ManagedDll.h"

_declspec(dllexport) void ShowMessageBox(int *value);

int _tmain()
{
	int *result;

	ShowMessageBox(result);
	
	if(*result == 1)
		printf("Ok Was Pressed \n");
	else
		if(*result == 2)
			printf("Cancel Was Pressed \n");
		else
			printf("Unknown result \n");

	system("pause");
	return 0;
}


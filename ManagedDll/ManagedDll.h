// ManagedDll.h

#pragma once

using namespace System;
using namespace System::Reflection;


namespace ManagedDll {	

	public ref class DoWork
	{
	public:void ShowCSharpMessageBox(int *value)
		{			
			ManagedCSharp::ManagedClass::ShowValue(*value);	
			return;
		}
	};
}

__declspec(dllexport) void ShowMessageBox(int *value)
{
	ManagedDll::DoWork work;	
	work.ShowCSharpMessageBox(value);	
}








// ManagedDll.h

#pragma once

using namespace System;
using namespace System::Reflection;


namespace ManagedDll 
{	
	public ref class DoWork
	{
		public:void ShowCSharpMessageBox(int *value)
		{			
			ManagedCSharp::ManagedClass::ShowValue(*value);	
			return;
		}

		public: int GetValue(int value) 
		{
			return value;
		}

		public: int AddToValue(int value, int incresse)
		{
			return value + incresse;
		}
	};
}

__declspec(dllexport) void ShowMessageBox(int *value)
{
	ManagedDll::DoWork work;	
	work.ShowCSharpMessageBox(value);	
}

__declspec(dllexport) int GetValue(int value)
{
	ManagedDll::DoWork work;
	return work.GetValue(value);
}

__declspec(dllexport) int GetValue(int value, int incresse)
{
	ManagedDll::DoWork work;
	return work.AddToValue(value, incresse);
}





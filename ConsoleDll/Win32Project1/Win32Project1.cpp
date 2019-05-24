// Win32Project1.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Win32Project1.h"
#include "filelist.h"
#include <string>

// 这是导出变量的一个示例
WIN32PROJECT1_API int nWin32Project1=0;

// 这是导出函数的一个示例。
WIN32PROJECT1_API int fnWin32Project1(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 Win32Project1.h
CWin32Project1::CWin32Project1()
{
    return;
}

WIN32PROJECT1_API void listFiles(std::string& dir)
{
	listFiles(dir.c_str());
}
// Win32Project1.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Win32Project1.h"
#include "filelist.h"
#include <string>

// ���ǵ���������һ��ʾ��
WIN32PROJECT1_API int nWin32Project1=0;

// ���ǵ���������һ��ʾ����
WIN32PROJECT1_API int fnWin32Project1(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Win32Project1.h
CWin32Project1::CWin32Project1()
{
    return;
}

WIN32PROJECT1_API void listFiles(std::string& dir)
{
	listFiles(dir.c_str());
}
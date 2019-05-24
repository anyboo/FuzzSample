// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Win32Project1.h"

int main(int argc, char const *argv[])
{
	do {
		std::string directory;
		std::cout << "Enter a directory(ends with \'\\\'): ";
		std::cin >> directory;
		if (directory == "Q")
			break;
		directory.append("*.*");

		listFiles(directory);
	} while (true);

    return 0;
}


#include "filelist.h"
#include <stdio.h>
#include <windows.h>

void listFiles(const char* dir)
{
	HANDLE hFind;
	WIN32_FIND_DATA	findData;
	LARGE_INTEGER size;

	hFind = FindFirstFile(dir, &findData);
	if (hFind == INVALID_HANDLE_VALUE)
	{
		printf("Failed to find first file!\n");
		return;
	}
	do
	{
		if (strcmp(findData.cFileName, ".") == 0 || strcmp(findData.cFileName, "..") == 0)
			continue;
		if (findData.dwFileAttributes && FILE_ATTRIBUTE_DIRECTORY)
		{
			printf("%s\t<dir>\n", findData.cFileName);
		}
		else
		{
			size.LowPart = findData.nFileSizeLow;
			size.HighPart = findData.nFileSizeHigh;
			printf("%s\t %lld bytes\n", findData.cFileName, size.QuadPart);
		}

	} while (FindNextFile(hFind, &findData));

	printf("Done!\n");
}
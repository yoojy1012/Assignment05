#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int sum(int* pNumbers, int nIndex)
{
	if (nIndex <= 0)
	{
		return nIndex;
	}
	else
	{
		return pNumbers + sum(pNumbers, nIndex);
		nIndex--;
	}
}

int main(int argc, char* argv[])
{
	FILE* fp1, * fp2;
	char str[100];

	fp1 = fopen("argv[1]", "r");
	fp2 = fopen("argv[2]", "w+");


}

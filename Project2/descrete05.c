#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int sum(int* pNumbers, int nIndex)
{
	if (nIndex <= 0)
	{
		return nIndex;
		printf("%d\n", nIndex);
	}
	else
	{
		return pNumbers + sum(pNumbers, nIndex);
		printf("%d\n", *pNumbers);
		nIndex--;
	}
}

int main(int argc, char* argv[])
{
	FILE* fp1, * fp2;
	char str[100];

	if (fp1 = fopen(argv[1], "rt") == NULL) {
		printf("fail to open file.");
		return 0;
	}
	if (fp2 = fopen(argv[2], "wt") == NULL) {
		printf("fail to create file for write.");
		return 0;
	}

	int nNumber = 30;
	int pNumbers[30];

	for (int i = 0; i < nNumber; i++)
	{
		pNumbers[i] = i;
	}


	int nSum = sum(pNumbers, nNumber);

	printf("%d\n", nSum);

	free(pNumbers);

	fclose(fp1);
	fclose(fp2);
	return 0;
}

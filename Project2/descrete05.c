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
	}
}
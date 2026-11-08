#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=3;

	for (i = 3;i <= 99;i++)
	{
		if (i % 3 == 0)
			printf("%d ",i);
	}

}
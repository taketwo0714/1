#define _CRT_SECURE_NO_WARNINGS 1//优化版本
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int flag = 1; //假设这次的i是素数
		//判断i是否为素数
		//产生2~i-1之间的数字
		int j = 0;//i=a*b,若i不为素数,a/b必定有一个数小于根号i
		for (j = 2; j*j <= i; j++)//即j等于等号i
		{
			if (i % j == 0)
			{
				flag = 0;//不是素数
				break;
			}
		}
		//2种情况
		//1. break -- i不是素数
		//2. 没有j能整除i, i是素数
		if (flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int flag = 1; //假设这次的i是素数
		//判断i是否为素数
		//产生2~i-1之间的数字
		int j = 0;
		for (j = 2; j < i; j++)
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
	printf("\ncount = %d\n", count);//100~200区间内素数的数量
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	int count=0;
	for (i = 1;i <= 100;i++)
	{
		int n = i;
		while (n > 0)
		{
			if (n % 10 == 9)//进行最低位的检验
				count++;
			n /=10;//去掉最低位，让原来的十/百位成为最低位，供下一轮检验。若n本来就是个位，n 减到 0 时结束 while，进行下一个i值的检验
		}
	}
	printf("%d\n", count);
}
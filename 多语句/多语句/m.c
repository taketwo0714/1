#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int score = 0;
	scanf("%d",&score);
	if (score >= 60)
	{
		printf("PASS\n");//不知道怎么解决输出中文就是乱码的问题
		printf("congratuation\n");
	}
	else
	{
		printf("LOSE\n");
		printf("try it again\n");
	}
	return 0;//可以不加return0,但是加了更加美观
	}
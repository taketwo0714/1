#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//目标输出是下三角——第 1 行 1 个式子，第 2 行 2 个，… 第 9 行 9 个。
int main()
{
	int i, j;//：第 i 行的每个式子都用 i 作为第二个乘数，第一个乘数 j 从 1 递增到 i
	for (i = 1;i <= 9;i++)
	{
		for (j = 1;j <= i;j++)//内层次数随行数增长，自然形成三角形。
			printf("%d*%d==%-2d\t", j, i, i * j);//让一位数/两位数结果都占 2 格并左对齐，避免列错位
		printf("\n");
	}
}
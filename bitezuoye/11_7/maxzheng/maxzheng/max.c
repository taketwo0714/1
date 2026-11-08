#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10];
	int i = 0;
	int max = 0;
	printf("请输入10个数；\n");
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &arr[i]);
		if (i==0||arr[i] > max)
		max = arr[i];//更大才更新
	}
	printf("%d\n", max);

}
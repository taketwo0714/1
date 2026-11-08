#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float total = 0;
	scanf("%.2f", &total);
	if (total >= 50)
		printf("-15=%.2f\n", total - 15);
	else if (total >= 30)
		printf("-8=%2f\n", total - 8);
	else if (total >= 20)
		printf("-5=%.2f\n", total - 5);
	else
		printf("NO\n");
	
}
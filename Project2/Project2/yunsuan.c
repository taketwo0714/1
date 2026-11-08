#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 21;
	int b = 71;
	int a1 = a / 10;
	int a2 = a % 10;
	int b1 = b / 10;
	int b2 = b % 10;
	int c = a1 * 1000 + b1 * 100 + a2 * 10 + b2;
	scanf("%d%d",&a,&b);
	printf("%d", c);
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	long long a = 0;
	long long b = 0;
	if (scanf("%lld%lld", &a, &b) !=2)
		return 0;
	printf("%lld\n", a + b);
	return 0;

}
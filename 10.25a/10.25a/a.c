#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int a = 1;
    int b = 100;
    scanf("%d %d\n" ,&a,&b);
    int z = a / b;
    int y = a % b;
        printf("%d %d\n",z,y);
}
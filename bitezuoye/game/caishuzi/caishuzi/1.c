#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("-------------------------------\n");
	printf("----------  1. play    --------\n");
	printf("----------  0. exit    --------\n");
	printf("-------------------------------\n");
}

void game()
{
	int guess = 0;
	int r = rand() % 100 + 1;

	for (int count = 1; count <= 5; count++)
	{
		printf("请输入要猜的数字(第%d次):", count);
		scanf("%d", &guess);

		if (guess < r)
			printf("猜小了\n");
		else if (guess > r)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了！随机数是：%d\n", r);
			return;
		}
	}

	printf("很抱歉，5次机会全部用完，随机数是：%d\n", r);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("-------------------------------\n");
//	printf("----------  1. play    --------\n");
//	printf("----------  0. exit    --------\n");
//	printf("-------------------------------\n");
//}
//void game()
//{
//	int guess = 0;
//	int r = rand() % 100 + 1;
//	int count = 0;
//	for (count = 1;count <= 5;count++)
//	{
//		printf("请输入要猜的数字(第%d次) :\n", count);
//		scanf("%d", &guess);
//		if (guess < r)
//			printf("猜小了\n");
//		else if (guess > r)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你猜对了！\n");
//			return;
//		}
//	}
//	printf("很抱歉五次机会全部用完\n");
//	printf("答案是%d\n", r);
//
//
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do {
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输出错误，请重新输入\n");
//			break;
//
//
//		}
//
//
//	} while (input);
//
//}
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}

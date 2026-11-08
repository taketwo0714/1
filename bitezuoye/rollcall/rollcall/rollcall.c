#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char name[20][30] = {
        "张伟", "王芳", "李娜", "刘洋", "陈静",
        "杨帆", "赵磊", "黄敏", "周杰", "吴昊",
        "徐婷", "孙悦", "马超", "朱琳", "胡军",
        "郭涛", "何平", "高翔", "林峰", "罗静"
    };
    int a, b, ch;

    srand((unsigned)time(NULL));

    while (1)
    {
        a = rand() % 20;
        b = rand() % 20;

        while (b == a)
        {
            b = rand() % 20;
        }

        printf("本次点名：%s 和 %s\n", name[a], name[b]);
        printf("按回车继续，输入 q 退出：");

        ch = getchar();
        if (ch == 'q' || ch == 'Q')
        {
            break;
        }
    }

    printf("点名结束。\n");
    return 0;
}

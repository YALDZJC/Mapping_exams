#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//int main()
//{
//	double huart = 256, player = 0;
//	double max_huart = 0;
//	
//	printf("请输入玩家当前力量：");
//	scanf_s("%lf", &player);
//
//	max_huart = huart * (player + 100) / 100;
//
//	printf("武器实际最大伤害：%lf", max_huart);
//}

//int main()
//{
//	int A = 0, B = 0, C = 0;
//
//	printf("请输入A的重量：");
//	scanf_s("%d", &A);
//
//	printf("请输入B的重量：");
//	scanf_s("%d", &B);
//
//	printf("请输入C的重量：");
//	scanf_s("%d", &C);
//
//	if (A > B && A > C)
//	{
//		printf("A最重");
//	}
//	if (B > A && B > C)
//	{
//		printf("B最重");
//	}	
//	if (C > A && C > B)
//	{
//		printf("C最重");
//	}
//
//	return 0;
//}


//int main()
//{
//    srand((unsigned int)time(NULL));
//
//    int ret = rand() % 100;
//    int num = 0;
//    printf("请猜测大小：");
//
//    while (1)
//    {
//        scanf_s("%d", &num);
//
//        if (num < ret)
//        {
//            printf("小了！\n");
//        }
//        else if (num > ret)
//        {
//            printf("大了！\n");
//        }
//        else if (num == ret)
//        {
//            printf("恭喜猜对了！\n"); 
//            break;
//        }
//    }
//
//    return 0;
//}

//int main()
//{
//    srand((unsigned)time(NULL));
//
//    int hp1 = 100;
//    int hp2 = 100;
//
//    int att1 = 0;
//    int att2 = 0;
//
//    while (hp1 >= 0 && hp2 >= 0)
//    {
//        att1 = rand() % 11 + 5;
//        att2 = rand() % 11 + 5;
//
//        hp1 -= att2;
//        hp2 -= att1;
//
//        printf("\n*****************************************\n");
//        printf("玩家1本回合攻击力为：%d\t剩余血量为：%d\n", att1, hp1);
//        printf("玩家2本回合攻击力为：%d\t剩余血量为：%d\n", att2, hp2);
//        printf("*****************************************\n");
//
//    }
//    printf("\n*****************************************\n");
//    printf("Game Over！！！\n");
//
//    if (hp1 > hp2)
//    {
//        printf("玩家1血量为：%d\n", hp1);
//        printf("玩家1获胜！！！\n");
//    }
//    else if (hp1 < hp2)
//    {
//        printf("玩家2血量为：%d\n", hp2);
//        printf("玩家2获胜！！！\n");
//    }
//    else
//    {
//        printf("平局！！！\n");
//    }
//    printf("*****************************************\n");
//
//    return 0;
//}

//int main() 
//{
//    int n;//金字塔的层数
//    int i;//之间有几个空 
//    int b;//第几层
//    int j;//*
//
//    printf("请输入金字塔的层数：");
//    scanf("%d", &n);
//    if (n > 0) 
//    {
//        //每层循环
//        for (b = 0; b <= n; b++) 
//        {
//            for (i = 1; i <= (n - b); i++) 
//            {
//                printf(" ");
//            }
//            for (j = 1; j <= b; j++) 
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    else 
//    {
//        printf("输入非法数据，请输入大于零的数");
//    }
//    return 0;
//}

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int num[9] = { 0 };
//
//	for(int i = 0; i < 9; i++)
//	{
//		num[i] = rand() % 100;
//	}
//
//    for (int i = 0; i < 9; i++)
//    {
//        printf("%d\t", num[i]);
//    }
//
//    for (int i = 0; i < 9; i++) 
//    {
//        for (int j = 0; j < 9 - 1 - i; j++) 
//        {
//            if (num[j] > num[j + 1])
//            {
//                int temp = num[j];
//                num[j] = num[j + 1];
//                num[j + 1] = temp;
//            }
//        }
//    }
//
//    printf("\n");
//
//    for (int i = 0; i < 9; i++)
//    {
//        printf("%d\t", num[i]);
//    }
//
//}

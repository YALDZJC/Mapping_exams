#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//int main()
//{
//	double huart = 256, player = 0;
//	double max_huart = 0;
//	
//	printf("��������ҵ�ǰ������");
//	scanf_s("%lf", &player);
//
//	max_huart = huart * (player + 100) / 100;
//
//	printf("����ʵ������˺���%lf", max_huart);
//}

//int main()
//{
//	int A = 0, B = 0, C = 0;
//
//	printf("������A��������");
//	scanf_s("%d", &A);
//
//	printf("������B��������");
//	scanf_s("%d", &B);
//
//	printf("������C��������");
//	scanf_s("%d", &C);
//
//	if (A > B && A > C)
//	{
//		printf("A����");
//	}
//	if (B > A && B > C)
//	{
//		printf("B����");
//	}	
//	if (C > A && C > B)
//	{
//		printf("C����");
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
//    printf("��²��С��");
//
//    while (1)
//    {
//        scanf_s("%d", &num);
//
//        if (num < ret)
//        {
//            printf("С�ˣ�\n");
//        }
//        else if (num > ret)
//        {
//            printf("���ˣ�\n");
//        }
//        else if (num == ret)
//        {
//            printf("��ϲ�¶��ˣ�\n"); 
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
//        printf("���1���غϹ�����Ϊ��%d\tʣ��Ѫ��Ϊ��%d\n", att1, hp1);
//        printf("���2���غϹ�����Ϊ��%d\tʣ��Ѫ��Ϊ��%d\n", att2, hp2);
//        printf("*****************************************\n");
//
//    }
//    printf("\n*****************************************\n");
//    printf("Game Over������\n");
//
//    if (hp1 > hp2)
//    {
//        printf("���1Ѫ��Ϊ��%d\n", hp1);
//        printf("���1��ʤ������\n");
//    }
//    else if (hp1 < hp2)
//    {
//        printf("���2Ѫ��Ϊ��%d\n", hp2);
//        printf("���2��ʤ������\n");
//    }
//    else
//    {
//        printf("ƽ�֣�����\n");
//    }
//    printf("*****************************************\n");
//
//    return 0;
//}

//int main() 
//{
//    int n;//�������Ĳ���
//    int i;//֮���м����� 
//    int b;//�ڼ���
//    int j;//*
//
//    printf("������������Ĳ�����");
//    scanf("%d", &n);
//    if (n > 0) 
//    {
//        //ÿ��ѭ��
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
//        printf("����Ƿ����ݣ���������������");
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

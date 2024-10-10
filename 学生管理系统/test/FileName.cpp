#define  _CRT_SECURE_NO_WARNINGS

/*学生管理系统*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//包含头文件string.h
#define MAX 60//定义MAX最大值为60 
struct student {
	char name[20];
	int age;
	int id;
	char sex[10];
};

struct class_room {
	struct student st[MAX];	//定义多个学生 
	int size;	//当前班级的人数
};

void printf_menu()//打印主菜单函数 
{
	printf("        学生管理系统        \n");
	printf("*--------------------------*\n");
	printf("|1、添加学生信息           |\n");
	printf("|2、显示所有学生信息       |\n");
	printf("|3、查询学生信息           |\n");
	printf("|4、删除学生信息           |\n");
	printf("|0、退出                   |\n");
	printf("*--------------------------*\n");
	printf("请输入相应的序号选择：");
}

void add_student(struct class_room* Student)//添加学生信息，其中struct class_room *Student为结构体指针 
{
	printf("请输入学生的姓名：\n");
	scanf("%s", Student->st[Student->size].name);	//数组名代表首地址 
	printf("请输入学生的年龄：\n");
	scanf("%d", &Student->st[Student->size].age);	//取变量的地址 
	printf("请输入学生的id：\n");
	scanf("%d", &Student->st[Student->size].id);
	printf("请输入学生的性别：\n");
	scanf("%s", Student->st[Student->size].sex);

	Student->size++;//班级人数加一
}

void show_student(struct class_room* Student)//显示所有学生信息 
{
	int i;
	for (i = 0; i < Student->size; i++)//Student->n为当前班级的人数
	{
		printf("第 %d 个学生名字是：%s	年龄是：%d	ID是：%d	性别是：%s	\n", i + 1, Student->st[i].name, Student->st[i].age, Student->st[i].id, Student->st[i].sex);//第一个学生
	}
}

int find_student(struct class_room* Student)//查找指定学生 
{
	int id, i;
	printf("请输入要查找的学生id：\n");
	scanf("%d", &id);

	for (i = 0; i < Student->size; i++)
	{
		if (id == Student->st[i].id)
		{
			printf("第 %d 个学生名字是：%s	年龄是：%d	ID是：%d	性别是：%s\n", i + 1, Student->st[i].name, Student->st[i].age, Student->st[i].id, Student->st[i].sex);//第一个学生
			return i;
		}
	}
	return -1;
}

void remove_student(struct class_room* Student)//删除指定学生 
{
	int ret, i;
	ret = find_student(Student);

	if (ret != -1)
	{
		for (i = ret; i < Student->size - 1; i++)
		{
			strcpy(Student->st[i].name, Student->st[i + 1].name);//由于是字符串类型复制使用头文件string.h中的strcpy复制函数 
			Student->st[i].age = Student->st[i + 1].age;
			Student->st[i].id = Student->st[i + 1].id;
			strcpy(Student->st[i].sex, Student->st[i + 1].sex);
		}

		Student->size--;
		printf("该学生已经删除成功！\n");
	}
	else
	{
		printf("查无此人！！！");
	}
}

void FunEnd()
{
	system("pause");
	system("cls");
}

int main()
{
	struct class_room Student;//定义一个班级为Student存储学生 
	Student.size = 0;//初始化，学生人数为0 

	while (1)//无限循环 
	{
		printf_menu();//调用主菜单函数输出主菜单

		int choose;//定义一个序号
		scanf("%d", &choose);
		system("cls");

		switch (choose)
		{
		case 1:
			add_student(&Student);//添加学生
			FunEnd();
			break;

		case 2:
			show_student(&Student);//显示学生
			FunEnd();
			break;

		case 3:
			find_student(&Student);//查询学生
			FunEnd();
			break;

		case 4:
			remove_student(&Student);//删除学生
			FunEnd();
			break;

		case 0:
			return 0;//退出程序

		default://若输出错误的序号，则跳转至重新输出
			printf("输出错误，请重新输入！\n");
			FunEnd();
		}
	}
}


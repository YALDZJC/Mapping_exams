#define  _CRT_SECURE_NO_WARNINGS

/*ѧ������ϵͳ*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//����ͷ�ļ�string.h
#define MAX 60//����MAX���ֵΪ60 
struct student {
	char name[20];
	int age;
	int id;
	char sex[10];
};

struct class_room {
	struct student st[MAX];	//������ѧ�� 
	int size;	//��ǰ�༶������
};

void printf_menu()//��ӡ���˵����� 
{
	printf("        ѧ������ϵͳ        \n");
	printf("*--------------------------*\n");
	printf("|1�����ѧ����Ϣ           |\n");
	printf("|2����ʾ����ѧ����Ϣ       |\n");
	printf("|3����ѯѧ����Ϣ           |\n");
	printf("|4��ɾ��ѧ����Ϣ           |\n");
	printf("|0���˳�                   |\n");
	printf("*--------------------------*\n");
	printf("��������Ӧ�����ѡ��");
}

void add_student(struct class_room* Student)//���ѧ����Ϣ������struct class_room *StudentΪ�ṹ��ָ�� 
{
	printf("������ѧ����������\n");
	scanf("%s", Student->st[Student->size].name);	//�����������׵�ַ 
	printf("������ѧ�������䣺\n");
	scanf("%d", &Student->st[Student->size].age);	//ȡ�����ĵ�ַ 
	printf("������ѧ����id��\n");
	scanf("%d", &Student->st[Student->size].id);
	printf("������ѧ�����Ա�\n");
	scanf("%s", Student->st[Student->size].sex);

	Student->size++;//�༶������һ
}

void show_student(struct class_room* Student)//��ʾ����ѧ����Ϣ 
{
	int i;
	for (i = 0; i < Student->size; i++)//Student->nΪ��ǰ�༶������
	{
		printf("�� %d ��ѧ�������ǣ�%s	�����ǣ�%d	ID�ǣ�%d	�Ա��ǣ�%s	\n", i + 1, Student->st[i].name, Student->st[i].age, Student->st[i].id, Student->st[i].sex);//��һ��ѧ��
	}
}

int find_student(struct class_room* Student)//����ָ��ѧ�� 
{
	int id, i;
	printf("������Ҫ���ҵ�ѧ��id��\n");
	scanf("%d", &id);

	for (i = 0; i < Student->size; i++)
	{
		if (id == Student->st[i].id)
		{
			printf("�� %d ��ѧ�������ǣ�%s	�����ǣ�%d	ID�ǣ�%d	�Ա��ǣ�%s\n", i + 1, Student->st[i].name, Student->st[i].age, Student->st[i].id, Student->st[i].sex);//��һ��ѧ��
			return i;
		}
	}
	return -1;
}

void remove_student(struct class_room* Student)//ɾ��ָ��ѧ�� 
{
	int ret, i;
	ret = find_student(Student);

	if (ret != -1)
	{
		for (i = ret; i < Student->size - 1; i++)
		{
			strcpy(Student->st[i].name, Student->st[i + 1].name);//�������ַ������͸���ʹ��ͷ�ļ�string.h�е�strcpy���ƺ��� 
			Student->st[i].age = Student->st[i + 1].age;
			Student->st[i].id = Student->st[i + 1].id;
			strcpy(Student->st[i].sex, Student->st[i + 1].sex);
		}

		Student->size--;
		printf("��ѧ���Ѿ�ɾ���ɹ���\n");
	}
	else
	{
		printf("���޴��ˣ�����");
	}
}

void FunEnd()
{
	system("pause");
	system("cls");
}

int main()
{
	struct class_room Student;//����һ���༶ΪStudent�洢ѧ�� 
	Student.size = 0;//��ʼ����ѧ������Ϊ0 

	while (1)//����ѭ�� 
	{
		printf_menu();//�������˵�����������˵�

		int choose;//����һ�����
		scanf("%d", &choose);
		system("cls");

		switch (choose)
		{
		case 1:
			add_student(&Student);//���ѧ��
			FunEnd();
			break;

		case 2:
			show_student(&Student);//��ʾѧ��
			FunEnd();
			break;

		case 3:
			find_student(&Student);//��ѯѧ��
			FunEnd();
			break;

		case 4:
			remove_student(&Student);//ɾ��ѧ��
			FunEnd();
			break;

		case 0:
			return 0;//�˳�����

		default://������������ţ�����ת���������
			printf("����������������룡\n");
			FunEnd();
		}
	}
}


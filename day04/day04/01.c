#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


int test(int a)
{
	if (a % 2 != 0)
	{
		printf("%d\n", a);
	}
}

int main()
{
	/*int a ;
	scanf("%d", &a);
	if (a >= 18)
	{
		if (a > 18 && a<=28)
		{
			printf("����\n");
			return 0;
		}
		else
		{
			if(a>28&&a<=55)
			{
				printf("׳��\n");
				return 0;
			}
			else
			{
				if (a > 55)
					printf("����\n");
				return 0;
			}
		}
		printf("����\n");
	}
	else
	{
		printf("δ����\n");
		return 0;
	}*/

	//for (int a=1; a <= 100; a++)
	//{
	//	if (a % 2 != 0)
	//		printf("%d\n", a);
	//}

	//int a = 1;
	//while (a<=100)
	//{
	//	if (a % 2 != 0)
	//		printf("%d\n", a);
	//	a++;
	//}

	//int day ;
	//scanf("%d",&day);
	//switch(day)
	//{
	//case 1:
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//	printf("������\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//	break;
	//}

		int day ;
	scanf("%d",&day);
	switch(day)
	{
	default:
		printf("�������\n");
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	}




	return 0;
}
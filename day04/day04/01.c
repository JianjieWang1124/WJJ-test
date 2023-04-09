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
			printf("青年\n");
			return 0;
		}
		else
		{
			if(a>28&&a<=55)
			{
				printf("壮年\n");
				return 0;
			}
			else
			{
				if (a > 55)
					printf("老年\n");
				return 0;
			}
		}
		printf("成年\n");
	}
	else
	{
		printf("未成年\n");
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
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期天\n");
	//	break;
	//}

		int day ;
	scanf("%d",&day);
	switch(day)
	{
	default:
		printf("输入错误\n");
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	}




	return 0;
}
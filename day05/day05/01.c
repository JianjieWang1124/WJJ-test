#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

int main()
{	
	//int a = getchar();
	//printf("%c\n",a);

	//EOF- end of file 本质是一个-1的值
	//char a[5];
	//char b[5] = "12345";

	//if ((a[5] = getchar()) == b[5])
	//{
	//	printf("正确的\n");
	//}
	//else
	//{
	//	printf("错误的\n");
	//}

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
	
	//int a = 0;
	//while ((a=getchar())!=EOF)
	//{
	//	putchar(a);
	//}

	//char a;
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("输入密码：");//123456
	//					//scanf只会把空格之前的数据读走
	//scanf("%s",password);//在输入函数当中有一个输入缓冲区，当输入123456的时候，输入缓冲区里面有123456\n，然后输入函数会拿走123456，输入缓冲区就只剩下\n了
	//printf("请确认(Y/N)");
	//while ((a = getchar()) != '\n')  //用一个循环把缓冲区里的数据都取出来，遇到'\n'则跳出循环
	//{
	//}
	//ret = getchar();//Y/N     getchar会访问输入缓冲区，先看输入缓冲区有没有东西，有东西就直接输入了，没有就要我们键盘输入，之前的scanf里面剩下来一个\n，所以这个\n被getchar拿走了
	//                //要让getchar访问的输入缓冲区是清空什么都没有的，所以要在此之前再设置一个getchar把缓冲区里的\n拿走
	//if (ret =='Y')
	//{
	//	printf("确认成功");
	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}

	//int a;
	//while ((a = getchar()) != EOF)  判断
	//{
	//	if (a < '0' || a>'9')
	//		continue;
	//	putchar(a);

	//}

	//for(表达式1;表达式2;表达式3)，
	// 表达式1为初始化部分，用于初始化循环变量。
	// 表达式2为条件判断部分。用于判断循环什么时候终止
	// 表达式3为调整部分，用于循环条件的调整
	//	循环语句

	for (int a = 1; a <= 10; a++)
	{
		printf("%d\n", a);

	}


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>


int binsearch(int x, int v[], int n)
{

	for (int a = 0; a <= n - 1; a++)
	{
		if (v[a] == x)
			return a;
	}
	return 0;
}

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

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i==5)
	//	{
	//		continue;
	//	}
	//	printf("%d\n", i);



	//}   //输出的是1 2 3 4 6 7 8 9 10 ，因为i等于5的时候重复了循环

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i==5)
	//	{
	//		break;
	//	}
	//	printf("%d\n", i); /输出的是1 2 3 4 当i等于5的时候跳出循环，循环结束


	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n",arr[i]);

	//}
	// 
	//for (;;)
	//{
	//	printf("haha");

	//}
	//
	// 1.for循环的初始化，调整，判断都可以省略，但是：for循环的额 判断部分如果被省略，那判断条件就是：恒为正
	//
	//

	//int i = 0;
	//int j = 0;

	//for (i = 0; i < 10; i++)
	//{
	//	for (j = 0; j < 10; j++)
	//	{
	//		printf("aaa\n");
	//	}
	//}

	//int x, y;
	//for (x = 0, y = 0; x < 2 && y < 5; x, y+=2)
	//{
	//	printf("%d\t%d\n",x,y);

	//}
	//	

	//int i = 0;
	//int k = 0;
	//for (i = 0, k = 0; k = 0; i++, k++)
	//{
	//	k++;          循环次数为0，因为根本没有进循环,判断语句中k=0最终为0,0为假，所以不进入循环
	//}


	//do......while ()循环
	//do
	//	循环语句;
	//while(表达式);判断语句


	//int i = 1;
	//do
	//{
	//	printf("%d ", i);
	//	i++;
	//} 

	//while (i <= 10);

	//int i = 1;
	//do
	//{
	//	if (i == 5)
	//	{
	//		continue;
	//	}
	//	else
	//	{
	//		printf("%d ",i);
	//		i++;
	//	}
	//}
	//while(i<=10);   do循环无论如何都会执行一循环，因为是先循环后判断

	//int i = 0;
	//int j = 0;
	//int ret = 1;
	//int sum = 0;

	//for (i = 1; i <= 3; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		ret = ret * j;
	//	}
	//	sum = sum + ret;
	//	ret = 1;
	//}
	//printf("%d\n",sum);


	//int i = 0;x // 計算n的阶乘
	//int sum = 0;
	//int ret = 1;
	//for (i = 1; i <= 3; i++)
	//{
	//	ret = ret * i;
	//	sum = sum + ret;
	//}
	//printf("%d\n",sum);

	//int i = 1;
	//int j = 1;
	//int sum = 0;
	//int ret = 1;


	//for (i = 1; i <=5; i++)
	//{
	//	for (j ; j <= i; j++)
	//	{
	//		ret = ret * j;
	//	}
	//	sum = sum + ret;
	//}
	//printf("%d\n",sum);

//int binsearch(int x, int v[], int n) //在一个有序数组中查找具体的某个数字n。
//{
//
//	for (int a = 0; a <= n - 1; a++)
//	{
//		if (v[a] == x)
//			return a;
//	}
//	return 0;
//}


	//int arr[9] = {1,2,3,4,5,6,7,8};

	//int a=binsearch(7, arr, 8);

	//printf("%d\n",a);     //





	return 0;
}
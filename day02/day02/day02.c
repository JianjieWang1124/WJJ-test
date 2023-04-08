#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//#define MAX 10

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//	A,
//	B,
//	C
//};
//
//enum Color
//{
//	RED,
//	BLUE,
//	YELLOW
//};

int ADD(int a, int b)
{
	int c = a + b;
	return c;
}



int main()
{
	//const int n = 10;
	//int arr[n] = { 0 };  n是变量，但是又有常属性，所以n是常变量
	//printf("%d\n",MALE);
	//printf("%d\n",FEMALE );
	//printf("%d\n",SECRET );
	//printf("%d\n", A);
	//printf("%d\n", B);
	//printf("%d\n", C);

	//enum Color color = BLUE;
	//color = YELLOW;
	//printf("%d\n", color);
	//

	//char arr1[] = "abc";   // \0是字符串的结束表示,不属于字符串内容
	//char arr2[] = {'a','b','c','\0'};
	//printf("%s\n",arr1);
	//printf("%s\n", arr2);
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));

	//printf("%s\n", "c:\\test\\32\\test.c");
	//printf("%d\n", strlen("c:\test\32\test.c "));
	//printf("%c\n", '\132');


	//int input = 0;
	//printf("加入bite");
	//printf("你要好好学习吗？(1/0)");
	//scanf("%d", &input);
	//if (input == 1)
	//	printf("你会拿到好offer\n");
	//else
	//	printf("只能回家卖红薯了\n");

	//int line = 0;
	//printf("加入bite");

	//while (line < 2000)
	//{
	//	printf("敲一行代码:%d\n",line);
	//	line++;
	//}

	//if(line>=2000)
	//printf("拿到好offer");

	//int a = 10;
	//int b = 5;
	//int c;
	//c=ADD(a,b);
	//printf("%d\n", c);


	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//while (i<=9)
	//{
	//	printf("%d\n",arr[i]);
	//	i++;
	//}

	int a = 1;
	int b = a<<3;
	printf("%d\n", b);


	return 0;
}


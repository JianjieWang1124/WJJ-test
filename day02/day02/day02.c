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
	//int arr[n] = { 0 };  n�Ǳ������������г����ԣ�����n�ǳ�����
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

	//char arr1[] = "abc";   // \0���ַ����Ľ�����ʾ,�������ַ�������
	//char arr2[] = {'a','b','c','\0'};
	//printf("%s\n",arr1);
	//printf("%s\n", arr2);
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));

	//printf("%s\n", "c:\\test\\32\\test.c");
	//printf("%d\n", strlen("c:\test\32\test.c "));
	//printf("%c\n", '\132');


	//int input = 0;
	//printf("����bite");
	//printf("��Ҫ�ú�ѧϰ��(1/0)");
	//scanf("%d", &input);
	//if (input == 1)
	//	printf("����õ���offer\n");
	//else
	//	printf("ֻ�ܻؼ���������\n");

	//int line = 0;
	//printf("����bite");

	//while (line < 2000)
	//{
	//	printf("��һ�д���:%d\n",line);
	//	line++;
	//}

	//if(line>=2000)
	//printf("�õ���offer");

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


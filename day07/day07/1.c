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

	//EOF- end of file ������һ��-1��ֵ
	//char a[5];
	//char b[5] = "12345";

	//if ((a[5] = getchar()) == b[5])
	//{
	//	printf("��ȷ��\n");
	//}
	//else
	//{
	//	printf("�����\n");
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

	//int a = 0;
	//while ((a=getchar())!=EOF)
	//{
	//	putchar(a);
	//}

	//char a;
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("�������룺");//123456
	//					//scanfֻ��ѿո�֮ǰ�����ݶ���
	//scanf("%s",password);//�����뺯��������һ�����뻺������������123456��ʱ�����뻺����������123456\n��Ȼ�����뺯��������123456�����뻺������ֻʣ��\n��
	//printf("��ȷ��(Y/N)");
	//while ((a = getchar()) != '\n')  //��һ��ѭ���ѻ�����������ݶ�ȡ����������'\n'������ѭ��
	//{
	//}
	//ret = getchar();//Y/N     getchar��������뻺�������ȿ����뻺������û�ж������ж�����ֱ�������ˣ�û�о�Ҫ���Ǽ������룬֮ǰ��scanf����ʣ����һ��\n���������\n��getchar������
	//                //Ҫ��getchar���ʵ����뻺���������ʲô��û�еģ�����Ҫ�ڴ�֮ǰ������һ��getchar�ѻ��������\n����
	//if (ret =='Y')
	//{
	//	printf("ȷ�ϳɹ�");
	//}
	//else
	//{
	//	printf("����ȷ��\n");
	//}

	//int a;
	//while ((a = getchar()) != EOF)  �ж�
	//{
	//	if (a < '0' || a>'9')
	//		continue;
	//	putchar(a);

	//}

	//for(���ʽ1;���ʽ2;���ʽ3)��
	// ���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ��������
	// ���ʽ2Ϊ�����жϲ��֡������ж�ѭ��ʲôʱ����ֹ
	// ���ʽ3Ϊ�������֣�����ѭ�������ĵ���
	//	ѭ�����

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i==5)
	//	{
	//		continue;
	//	}
	//	printf("%d\n", i);



	//}   //�������1 2 3 4 6 7 8 9 10 ����Ϊi����5��ʱ���ظ���ѭ��

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i==5)
	//	{
	//		break;
	//	}
	//	printf("%d\n", i); /�������1 2 3 4 ��i����5��ʱ������ѭ����ѭ������


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
	// 1.forѭ���ĳ�ʼ�����������ж϶�����ʡ�ԣ����ǣ�forѭ���Ķ� �жϲ��������ʡ�ԣ����ж��������ǣ���Ϊ��
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
	//	k++;          ѭ������Ϊ0����Ϊ����û�н�ѭ��,�ж������k=0����Ϊ0,0Ϊ�٣����Բ�����ѭ��
	//}


	//do......while ()ѭ��
	//do
	//	ѭ�����;
	//while(���ʽ);�ж����


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
	//while(i<=10);   doѭ��������ζ���ִ��һѭ������Ϊ����ѭ�����ж�

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


	//int i = 0;x // Ӌ��n�Ľ׳�
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

//int binsearch(int x, int v[], int n) //��һ�����������в��Ҿ����ĳ������n��
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
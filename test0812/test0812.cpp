// test0812.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

//*******************���switch���÷�*********************//
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30; break;
//	case 2: b = 20; break;
//	case 3: b = 10; break;
//	default:b = 0;
//	}
//	return b;
//}
//int main()
//{
//	int b=func(10);
//	printf("b=%d\n",b);
//}


//************************����ʹ��scanf����***********************//
//int main()
//{
//	int a=0, b=0, c=0;
//	scanf_s("%d%d%d",&a,&b,&c);
//	printf("a=%d,b=%d,c=%d\n",a,b,c);
//	return 0;
//}


//************************���0��100����3�ı�������******************//
//int main()
//{
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//**********************�������������Լ��**************************//
//***************************շת�����**************************//
//int main()
//{
//	int a = 0, b = 0;
//	int r = 0;
//	scanf_s("%d%d",&a,&b);
//	while(a%b)
//	{
//		r = a%b;
//		a = b;
//		b = r;
//	}
//	printf("���Լ����%d\n",b);
//	return 0;
//}

//****************************�������꣨����һ�� ���겻�� �İ���һ��**************************//
//int main()
//{
//	int year;
//	int count=0;
//	for (year = 1000; year <= 2000;year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			count++;
//			printf("%d ",year);
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}

//***********************����100��200֮�������*****************//
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		//�ж�i�Ƿ�Ϊ������������2��i-1�������ж��Ƿ�������i,����ν���Գ���
//		int j = 0;
//		for (j = 2; j <=sqrt((float)i);j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j>sqrt((float)i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\n����Ϊ%d\n",count);
//	return 0;
//}


//*******************************����1��100֮���������9�����Լ�����**********************//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100;i++)
//	{
//		if (i%10==9||i/10==9)
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\n����Ϊ%d\n",count);
//	return 0;
//}

//**************************����1/1+1/2-1/3+1/4.......1/100�ĺ�*****************************//
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100;i++)
//	{
//		if (i % 2 == 1)
//			flag = 1;
//		else if (i % 2 == 0)
//			flag = -1;
//		sum += flag*1.0 / i;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}

//****************************���ʮ�����е����ֵ****************************//
//int main()
//{
//	int arr[] = {1,2,3,-4,5,6,7,8,-9,-10};
//	int max = arr[0];
//	scanf_s("%d%d%d%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
//	int i;
//	for (i = 1; i < sizeof(arr)/sizeof(arr[0]);i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("�����Ϊ%d\n",max);
//	printf("�����СΪ%d\n",sizeof(arr));
//	return 0;
//}

//************************����Ļ�����9*9�˷���*********************************//
//int main()
//{
//	int i, j, a = 0;
//	for (i = 1; i <= 9;i++)
//	{
//		for (j = 1; j <= 9;j++)
//		{
//			a = i*j;
//			if (j == 9&&j>=i)
//				printf("%d*%d=%-2d\n", i, j,a);
//			else if (j != 9&&j>=i)
//				printf("%d*%d=%-2d ",i,j,a);
//		}
//	}
//	return 0;
//}

//***********************����n�Ľ׳�*********************//
//int main()
//{
//	int i,n=0;
//	int sum = 1;
//	scanf_s("%d",&n);
//	for (i=1; i <= n;i++)
//	{
//		sum *= i;
//	}
//	printf("n!=%d\n",sum);
//	return 0;
//}


//*****************************��������Ϸ*************************//
//****************ʱ����ĸ���������ǰ��ʱ�任������ȥ���������ʼʱ�䣬Ҳ����1970��1��1��0ʱ0��0��**************8//
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*********************************\n");
//	printf("********  1.play  0.exit  *******\n");
//	printf("*********************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//		ret = rand()%100+1;//����1-100�������
//		//printf("%d\n",ret);
//		while (1)
//		{
//			printf("�������>:");
//			scanf_s("%d", &guess);
//			if (guess > ret) printf("�´���\n");
//			else if (guess < ret) printf("��С��\n");
//			else
//			{
//				printf("��ϲ�㣬�¶���\n");
//				break;
//			}
//		}
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));//��ʱ�����������������������
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ...\n");
//			break;
//		default:
//		    printf("ѡ�����...\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//****************************�ػ�С��Ϸ****************************//
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ��Խ���һ���Ӻ�ػ������룺������ȡ���ػ�\n������>:");
//	scanf_s("%s",input);
//	if (strcmp(input,"������") == 0)//�Ƚ������ַ�������Ⱥ���������
//	{
//		system("shutdown -a");
//		printf("Ok,��ܴ���,��ȡ���ػ�\n");
//	}
//	else goto again;
//	return 0;
//}

//********************�ú����������������ֵ***************************//
//int get_max(int x,int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf_s("%d%d",&a,&b);
//	int z=get_max(a,b);
//	printf("MAX=%d\n",z);
//	z = get_max(100, 200);
//	printf("MAX=%d\n", z);
//	return 0;
//}

//**********************���ֲ���********************//
//int binary_search(int arr[],int k,int sz)//�����ڲ���ȥ������Ҫ���ҵ�����ĸ����ǲ����׵�
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//��һ�����������в��Ҿ����ĳ�������ҵ��Ļ������±꣬�Ҳ�������-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	int k1 = 10;
//	int ret=binary_search(arr,k1,sz1);//����ط����ν�������������arr��Ԫ�صĵ�ַ
//	if (ret == -1) printf("�Ҳ���\n");
//	else printf("�ҵ��ˣ��±���%d\n",ret);
//	return 0;
//}

//*************************����һ�� num��+1****************************//
//void add(int* p)
//{
//	//*p++;����д��++������p
//	*p+=1;
//	//(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num=%d\n",num);//1
//	add(&num);
//	printf("num=%d\n", num);//2
//	add(&num);
//	printf("num=%d\n", num);//3
//}
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int c = add(a, b);
//	printf("%d\n",c);
//	return 0;
//}

//**************�ú����ݹ�ķ���˳���ӡ�����ÿһλ��**********************//

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d",&num);
//	print(num);
//	return 0;
//}

//***********************ģ��strlen����ʵ�ּ������鳤��***********************//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//����1
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}//�ݹ�ķ���2
//int main()
//{
//	char arr[] = "bit321";
//	int len = my_strlen(arr);
//	printf("len=%d\n",len);
//	return 0;
//}

//*************************�����ַ�����n�Ľ׳�*******************//
//int fac1(int n)//ѭ���ķ�ʽ
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int fac2(int n)//�ݹ�ķ�ʽ
//{
//	if (n != 1)
//	{
//		return n*fac2(n - 1);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d",&n);
//	int ret = fac2(n);
//	printf("%d�Ľ׳�Ϊ%d\n",n,ret);
//	return 0;
//}

//***************���n��쳲�������*******************//1 1 2 3 5 8 13 21 34 55
//int fib1(int n)//�ݹ�ķ�ʽ
//{
//	if (n > 2)
//	{
//		return fib1(n - 1) + fib1(n - 2);
//	}
//	else
//		return 1;
//}
//int fib2(int n)//ѭ���ķ�ʽ
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d",&n);
//	int ret = fib2(n);
//	printf("%d\n",ret);
//	return 0;
//}

//**********************����Ĵ�������ʼ�����洢֪ʶ******************//
//#include<string.h>
//int main()
//{
//	int arr[10] = {1,2,3};//����һ�����飬�ڲ�Ԫ��10��������ȫ��ʼ����ǰ����Ԫ�س�ʼ��Ϊ1��2��3������Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr1[5] = { 'a', 'b', 'c' };
//	char arr2[] = "���ѽ";
//	printf("%d\n",sizeof(arr2));//7,sizeof��������arr2��ռ�ռ�Ĵ�С�����������\0һ���ֽ�
//	printf("%d\n",strlen(arr2));//6��strlen���������ַ����ĳ��ȣ���\0֮ǰ���ַ�����
//	//strlen������ַ����󳤶ȵģ�����ֻ������ַ���
//	//sizeof������������顢���͵Ĵ�С����λ���ֽ�
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";//arr1�����Ԫ���� a b c \0��
//	char arr2[] = {'a', 'b', 'c'};//arr2�����Ԫ���� a b c ����û��\0��
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0; 
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//�������ڴ����������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n",&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[][3] = {1,2,3,4,5,6};//��ά���鴴������ʡ����
//
//	return 0;
//}

//***********************ð���㷨����**************************//
//void bubble_sort(int sz,int arr[])
//{
//	//����ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��
//		int flag = 1;//����տ�ʼ�����Ѿ��������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) break;
//	}
//}
//int main()
//{
//	int arr[] = {168,56,62,165,6849,365,1654,652,897,6284};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(sz,arr);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6};
//	printf("%p\n",arr);//����������Ԫ�ص�ַ����������������,
//	//(1)sizeof(������)����ʱ��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ�ֽ�
//	//(2)&�������������������������飬ȡ��ַȡ��������������ĵ�ַ
//	printf("%p\n",&arr[0]);//��Ԫ�ص�ַ
//	printf("%d\n",arr);//��Ԫ�ص�ַ
//	printf("%p\n",&arr);//����ȡ��ַȡ������������ĵ�ַ
//	return 0;
//}

//*************************��ʹ���м��������������**********************//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//����1��ȱ�����п�������int�ͱ�����ӻ����
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//����2
//	//a = a^b;
//	//b = a^b;
//	//a = a^b;
//	return 0;
//}

//**************************�ҳ�һ��������ֻ����һ�ε���************************//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//������1������ʹ��Ƕ��ѭ�������������������ÿ�������Ƚϣ���Ⱦ�count++�����countֻ+��һ�εľ���ֻ����һ�ε��Ǹ���
//	//������2��ʹ����򣬽�ȫ����������õ���������ֻ����һ�ε��Ǹ�������Ϊ������㽻���ɣ����Բ���Ҫ����
//	for (i = 0; i < sz;i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("�����ǣ�%d\n",ret);
//	return 0;
//}
//**********************************������****************************//
//������������+ - * / %
//1������%ֻ����������֮�⣬���������������ͺ͸�����
//2������/������������ȫΪ������ִ������������ֻҪ�и����;�ִ�и������
//int main()
//{
//	double a = 5 % 2;
//	printf("a= %f\n",a);
//	return 0;
//}

//��λ������������>> ����<<
//��һ��������Ϊ�������ƺ��߼����ƣ����������ұ߶�������߲�ԭ����λ�����֣��߼������ұ߶�������߲�0
//����˵����������ڴ��д洢�������ֵĲ��룬Ҳ���Ǹ���ȡ����+1���������Ǳ���
//���Ʋ�����������λ���㣬��߶������ұ߲�0
//int main()
//{
//	int a = 8;
//	//int b = a >> 1;
//	//printf("����b=%d\n",b);
//	int b = a << 1;
//	printf("����b=%d\n", b);
//	return 0;
//}

//********************�������ͳ����Ķ�����λ��1�ĸ���**************************//

//int main()
//{
//	int a = 8;
//	int count = 0;
//	scanf_s("%d",&a);
//	/*int i = 0;
//	for (i = 0; i < 32;i++)
//	{
//		if (1 == ((a >> i) & 1))
//			count++;
//	}*/
//	int i = 0;
//	int j = 1;
//	for (i = 0; i < 32;i++)
//	{
//		if (((j << i)&a) != 0)
//		{
//			count++;
//		}
//	}
//	printf("1�ĸ���Ϊ%d\n",count);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s=a+5));//���������ֻ�ǰ��裬�������ʵ������
//	printf("%d\n",s);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = ~a;
//	printf("%d\n",a);
//	return 0;
//
//}

//**********************************�߼��롢���Լ�++ǰ�úͺ���*************************//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;//&&�߼������ԭ�������Ϊ�٣��ұ߾Ͳ��ٽ��м��㣬ֱ���жϼ�����Ϊ��
//	i = a++ || ++b || d++;//���߼������ԭ�������Ϊ�棬�ұ߾Ͳ��ٽ��м��㣬ֱ���жϼ�����Ϊ��
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//ʹ��struct stu������ʹ���һ��ѧ������s1������ʼ��
//	struct stu s1 = {"����",20,"20210713"};
//	struct stu* ps = &s1;
//	printf("%s\n",(*ps).name);//�ṹ�����.��Ա��
//	printf("%d\n",(*ps).age);//�ṹ�����.��Ա��
//	printf("%s\n", ps->name); //�ṹ��ָ��->��Ա��
//	printf("%d\n",ps->age);//�ṹ��ָ��->��Ա��
//	//����Ч��һ��
//	return 0;
//}

//*****************************��������**********************//
//int main()
//{
//	char a = 32;
//	char b = 127;
//	char c = a + b;//����������������λ����0����������������λ����1
//	printf("%d\n",a);
//	printf("%c\n",a);
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//int main()
//{
//	int c = 3;
//	c = c + --c;
//	printf("%d\n",c);
//	return 0;
//}

//****************************ָ�����֪ʶ***********************//
//int main()
//{
//	int arr[10] = {0};
//	char* pc = arr;
//	int i = 0;
//	for (i = 0; i < 10;i++)
//	{
//		*(pc + i) = 1;
//	}
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* p = str;
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	//int* p = NULL;//��ʼ��ָ���������ָ�븳ֵ0��Ϊ�գ���ֹ����Ұָ������
//	char str[] = "bit";
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz;i++)
//	//{
//	//	printf("%d\n",*p+i);
//	//}
//	//printf("%d\n",&arr[9]-&arr[0]);//ָ��-��ָ��õ��Ľ�����м�Ԫ�صĸ���
//	int a = my_strlen(str);//����ָ��ģ��strlen����
//	printf("%d\n",a);
//	return 0;
//}//����ָ������Ԫ�ص�ָ����ָ������Ԫ�����һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ����бȽϣ����ǲ�������ָ���һ��Ԫ�ص�ǰһ���ڴ�λ�õ�ָ����бȽ�

//***********************ͳ�ƶ������������룩1�ĸ���*************************//
//int count_one(int a)
//{
//	int count = 0;
//	/*int j = 0;����1
//	for(j = 0; j < 32;j++)
//	{
//		if ((a >> j) & 1 == 1)
//		{
//			count++;
//		}
//	}*/
//	while (a)//����2
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 13;
//	int count = count_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}

//*************************ͳ����������������ͬλ�ĸ���***********************//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d",&a,&b);
//	int c = a^b;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((c >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n",count);
//	return 0;
//}

//void print(int* p,int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ",*(p+i)); 
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//} 

//*********************��ӡn*n�ĳ˷��ھ���*****************//

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d",&a);
//	print_table(a);
//	return 0;
//} 
//int digit(int a)
//{
//	if (a>9)
//	{
//		return digit(a/10)+a%10;
//	}
//	else
//	{
//		return a;
//	}
//}
//int main()
//{
//	int a = 1234;
//	int ret=digit(a);
//	printf("%d\n",ret);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	char tele[12];
//	short age;
//	char gender[5];
//};
//
//void print1(struct stu a)
//{
//	printf("name:  %s\n",a.name);
//	printf("tele:  %s\n", a.tele);
//	printf("age:   %d\n", a.age);
//	printf("gender:%s\n", a.gender);
//}
//
//void print2(struct stu* a)
//{
//	printf("name:  %s\n", a->name);
//	printf("tele:  %s\n", a->tele);
//	printf("age:   %d\n", a->age);
//	printf("gender:%s\n", a->gender);
//}
//int main()
//{
//	struct stu s1 = {"����","110",20,"��"};
//	print1(s1);
//	print2(&s1);//��ѡprint2������ָ�봫�η�ʽ����Ϊ�������ε�ʱ���������Ҫѹջ�ģ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����ͻ�Ƚϴ������п��ܵ������ܵ��½�
//	return 0;//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
//} 


//���з��������鶼һ���м���ѭ����������������Ͳ���Ҫ�ڸ�Ҳ��û�м����ˣ���������������ͱ�Ȼ��Ҫ�ڸǣ��Ǿ�һ���м��󣬼���Խ���Խ����˳�ٶ��ϣ�����������;����˳������;��˳�����¾��Ƿ���������Ͼ������ࡣ
//һ������ĳ���ԱҲ��һ����ɫ����̽��ÿһ�ε��Զ��ǳ����ư��Ĺ���

//******************************C����ʹ�õ��Լ���****************************//
//F5-�������ԣ�һ���F9���ʹ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//F9�����öϵ��ȡ���ϵ㣬�ٰ���F5������ִ�е����öϵ�ĵط�ͣ��
//F10�������ִ�г��� ��������뵽�������ڲ�
//F11������䣬������������ʱ��Ҳ����Ź������ڲ���ϸ�ڣ������뺯�����ڲ�
//F5���������ԣ���������ֱ��������һ���ϵ㴦��������ʱ�����úöϵ㡣��һ��F5������ִ�е���һ��ִ���߼��ϵ㴦�����������Ͽɼ��Ķϵ�
//int main()
//{
//	int i = 10;
//	for (i = 0; i < 100;i++)
//	{
//		printf("%d ",i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}

//*********************VS������C����ʵ�õ��Լ���************************//

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//����i��arr���Ǿֲ�������������ջ������
//1.ջ����Ĭ��ʹ�ù����ǣ���ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�
//2.���������±����������ַ���ɵ͵��߱仯�������ڶ�дarr[]��ʱ������һ�̻�����֮ǰ�Ͷ���õ�i
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void my_strcpy(char* dest,char* src)//�Զ����strcpy����
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//��ʱ*src����'\0'
//}�汾V1.0

//void my_strcpy(char* dest,char* src)
//{
//	while (*dest++ = *src++)//'\0'��ASCII��ֵΪ0
//	{
//		;
//	}
//}�汾V2.0

//void my_strcpy(char* dest,char* src)
//{
//	if (dest != NULL && src != NULL)//��ʹ��ָ��֮ǰһ��Ҫ���ж�ָ���Ƿ���ã��Ƿ�Ϊ��ָ�����Ұָ�룬��ֹ����ҵ�
//	{
//		while (*dest++ = *src++)//'\0'��ASCII��ֵΪ0
//		{
//			;
//		}
//	}
//}//�汾V3.0

//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL && src != NULL);//���Ժ�������������ı��ʽΪ����ʲô�¶������������ʽΪ�٣������ͻᱨ��
//	while (*dest++ = *src++)//'\0'��ASCII��ֵΪ0
//	{
//		;
//	}
//}//�汾V4.0

//void my_strcpy(char* dest, const char* src)//�Ӹ�const������*src֮ǰ����ʾ*src���ܱ��ı䣬��ֹԴ��ַ��д����copy����
//{
//	assert(dest != NULL && src != NULL);//���Ժ�������������ı��ʽΪ����ʲô�¶������������ʽΪ�٣������ͻᱨ��
//	while (*dest++ = *src++)//'\0'��ASCII��ֵΪ0
//	{
//		;
//	}
//}//�汾V5.0

//char* my_strcpy(char* dest, const char* src)//�Ӹ�const������*src֮ǰ����ʾ*src���ܱ��ı䣬��ֹԴ��ַ��д����copy����
//{
//	char* ret = dest;
//	assert(dest != NULL && src != NULL);//���Ժ�������������ı��ʽΪ����ʲô�¶������������ʽΪ�٣������ͻᱨ��
//	while (*dest++ = *src++)//'\0'��ASCII��ֵΪ0
//	{
//		;
//	}
//	return ret;//����������һ������ֵ����������������԰ѷ���ֵ��Ϊ����������������ĺ�������
//}//�汾V6.0
//int main()
//{
//	//strcpy �ַ�����������
//	char arr1[] = "#######################";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//C��������������ͣ���������ͣ�������ǰ������ĸ��
//void ��ʾ�����ͣ������ͣ�
//ͨ�������ں����ķ������͡������Ĳ���(���ڶ���ĺ����β������У�������ȷ��ʾ�˺����޲�����������ú���ʱ�δ���ʵ�Σ������־���)��ָ������(void*����ָ��)��
//��˴洢ģʽ��ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ���������ݵĸ�λ�������ڴ�ĵ͵�ַ����
//С�˴洢ģʽ��ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ���������ݵĸ�λ�������ڴ�ĸߵ�ַ����

//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("n��ֵΪ��%d\n",n);
//	printf("*pfloat��ֵΪ��%f\n", *pfloat);
//
//	*pfloat = 9.0;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pfloat��ֵΪ��%f\n", *pfloat);
//	return 0;
//}//��������ʽ�Ž�ȥ������ȡ�������ԣ����ηŽ�ȥ��������ȡ����Ҳ����
//���������ڴ��еı�ʾ������(-1)^s*M*2^E�����У�s������������MΪ��Ч���֣����ڵ��ڣ�С�ڣ�EΪָ��λ
//������˵��ʮ���Ƶ�5.0��������Ϊ101.0���൱��(-1)^0*1.01*2^2�������ó���sΪ0��MΪ1.01��EΪ2
//32λ����������ߵ�һλ����s�����ŵ�8λ��ָ��λ��ʣ�µ�23λΪ��Ч����M
//64λ����������ߵ�һλ����s�����ŵ�11λ��ָ��λ��ʣ�µ�52λΪ��Ч����M
//�洢M��ʱ����Ϊ����1.xxxxx����ʽ�����Թ涨ֻ����M��С����������
//�洢E��ʱ�򣬹涨��EΪ�޷�����������ζ�ţ�EΪ8λʱ������ȡֵ��Χλ0~255�����Խ�E���м�ֵ127�ٴ����ڴ棬EΪ11λʱ���м�ֵ1023ͬ��


//int main()
//{
//	char ch[] = "abcdef";
//	char* pc = ch;
//	printf("%s\n",ch);
//	printf("%s\n",pc);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//"abcdef"��һ�������ַ�����p�����ŵ����ַ�����Ԫ�ص�ַ
//	printf("%c\n",*p);
//	printf("%s\n",p);
//	return 0;
//}

//ѧϰ��վ��stackoverflow.com   segmentfault.com

//int main()
//{
//	char a1[] = "hello";
//	char a2[] = "hello";
//	char* a3 = "hello";
//	char* a4 = "hello";//a1 a2��ͬ a3 a4��ͬ
//	return 0;
//}

//*****************����ָ��*********************//

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* parr[] = { arr1, arr2, arr3 };//�ŵ�����Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ�����˼��ָ�������ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//arr ����Ԫ�ص�ַ   ��&arr����������ĵ�ַ
//	int (*p)[10] = &arr; //��ʱ��p��������ָ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",(*p)[i]);//����ָ����÷�1
//		printf("%d ", *(*p + i));//����ָ����÷�2
//	}
//
//	return 0;
//}

//����ָ�����ȷ�÷�

//void print1(int arr[3][5],int x,int y)//�������������ʽ
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x;i++)
//	{
//		for (j = 0; j < y;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5],int x,int y)//������ָ�����ʽ
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//��printf("%d ",p[i][j])�ȼ�
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
//	print1(arr,3,5);
//	print2(arr,3,5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*p+i);
//	}
//	printf("\n");
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ",*(p+j));
//		printf("%d ",p[j]);
//		printf("%d ",arr[j]);
//		printf("%d ",*(arr+j));//����д��Ч����ͬ
//	}
//	return 0; 
//}

//��ά���鴫��

// void test1(int arr[3][5])
//{}
// void test2(int arr[][5])//��ά���鴫�Σ����������п���ʡ��
//{}
// void test3(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = {0};
//	test1(arr);
//	test2(arr);
//	test3(arr);//��ά������Ԫ�ص�ַָ���ǵ�һ�еĵ�ַ,��һ��һά����ĵ�ַ
//	return 0;
//}

//����ָ����ָ�������ָ��
//����ָ����ָ������ָ�� ��ź�����ַ��ָ�� 

//int Add(int a,int b)
//{
//	return a + b;
//}
//void print(char* str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%p\n",&Add);//&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n",Add);
//	int (*pa)(int, int) = Add;//����ָ�붨�� ��paȥ����int (*)(int, int) ��pa���������� ����ָ������
//	printf("%d\n",(pa)(2,3));//����д�����ǿ��Ե� *������û������
//  printf("%d\n",pa(2, 3));
//	printf("%d\n",(*pa)(2,3));
//	printf("%d\n",(**pa)(2,3));
//	printf("%d\n",(***pa)(2,3));
//	void(*p)(char*) = print;
//	(*p)("hello");
//	return 0;
//}
//
//void(*   signal(int, void(*)(int))   )(int);//signal��һ��������������������������һ����int�ͣ�һ���Ǻ���ָ�����ͣ��ú���ָ��ָ��ĺ����ķ���������void��������int�͡�signal�����ķ��������Ǻ���ָ������
////Ҳ��������д:���򻯰棩
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);


//***************����ָ������*****************//
//����һ��Ԫ��Ϊ����ָ������飺
//int (*p[10])();��ȷ
//int(*)() p[10];����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*p)(int, int) = Add;//����ָ��
//	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};//����һ��������ͬ�ĺ���ָ�����飬����Ԫ��4��
//	int i = 0;
//	for (i = 0; i < 4;i++)
//	{
//		printf("%d\n", parr[i](2,3));
//	}
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
////дһ������ָ�����飬�ܹ����4��my_strcpy�����ĵ�ַ
//
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*pfarr[4])(char*, const char*) = { my_strcpy };


//*****************���׼�����*********************//
void menu()
{
	printf("*****************************\n");
	printf("****   1.add    2.sub    ****\n");
	printf("****   3.mul    4.div    ****\n");
	printf("****       0.exit        ****\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*parr[5])(int, int) = { 0, Add, Sub, Mul, Div };//�ú���ָ���������ʽ�����Ա���ʹ�ý϶��case��䣬������������㷨Ҳ���ӷ���
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf_s("%d",&input);
//		if (input>=1&&input<=4)
//		{
//			printf("����������������:>");
//			scanf_s("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input==0)
//		{
//			printf("�˳�...\n");
//		}
//		else
//		{
//			printf("ѡ�����...\n");
//		}
//		/*if (input == 1 || input == 2 || input == 3 || input == 4)
//		{
//			printf("����������������:>");
//			scanf_s("%d%d",&x,&y);
//		}*/
//		/*switch (input)
//		{
//		case 1:
//			printf("%d\n", Add(x,y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("���˳�...\n");
//			break;
//		default:
//			printf("ѡ�����...\n");
//			break;
//		}*/
//	}while(input);
//	return 0;
//}

//**************�ص�����***************//
//�ص���������һ��ͨ������ָ����õĺ���������Ѻ����ĵ�ַ��Ϊ�������ݸ���һ���������������������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص�����
//���ú���ָ�룬�Ѻ����ĵ�ַ�����������д��Σ����ݵ�����һ���������е���
//void calc(int (*pf)(int,int))
//{ 
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf_s("%d%d",&x,&y);
//	printf("%d\n",(*pf)(x,y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf_s("%d",&input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�...\n");
//			break;
//		default:
//			printf("�������...\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//**********ָ����ָ�������ָ��************//
//int main()
//{
//	int arr[10] = {0};
//	int (*p)[10] = &arr;//����ָ�룬ָ�����arr�������ĵ�ַ
//
//	int(*parr[4])(int, int);//��һ������ָ�����飬����Ԫ��4����Ԫ������Ϊint (*)(int,intp)
//	int(*(*pparr)[4])(int, int) = &parr;//pparr������ָ�룬ָ�������4��Ԫ�ص����飬����Ԫ��������int(*)(int,int)�ͺ���ָ��
//	return 0;
//}

 //qsort--���������������͵�����

//*************��дð�ݺ���**************//
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//һ��ð������
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int cmp_float(const void* e1,const void* e2)
//{
//	//return *(float*)e1 - *(float*)e2;//���������������С��1������ǿ������ת������0�����Բ�����
//	//��ȷ�ı�̷�ʽ
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 < *(float*)e2)
//		return -1;
//	else
//		return 1;
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_struct_by_age(const void* e1, const void* e2)
//{
//	if (((struct stu*)e1)->age == ((struct stu*)e2)->age)
//		return 0;
//	else if ((*(struct stu*)e1).age < (*(struct stu*)e2).age)
//		return -1;
//	else
//		return 1;
//}
//int cmp_struct_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, (*(struct stu*)e2).name);
//}
//int main()
//{
//	float arr[10] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0.0 };
//	struct stu s1[3] = { {"zhangsan",30}, {"lisi",20}, {"wangwu",10} };
//	int sz = sizeof(s1) / sizeof(s1[0]);
//	//bubble_sort(arr, sz);
//	qsort(s1, sz, sizeof s1[0], cmp_struct_by_name);//*****************qsort��������ȷ�÷�*****************//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ",s1[i].name);
//		printf("%d ", s1[i].age);
//	}
//	printf("\n");
//	return 0;
//}

//void* �������͵�ָ�룬���Խ��������������͵ĵ�ַ����void*���͵�ָ�벻�ܽ��н����ò�����Ҳ���ܽ��мӼ������Ĳ���

//struct stu
//{
//	char name[20];
//	int age;
//};
//void swap(char* e1, char* e2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int cmp_by_float(const void* e1, const void* e2)
//{
//	return *(float*)e1- *(float*)e2;//��д����ȱ��
//}
//
////�������qsort�������Լ���һ��
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)
//		{
//			//����Ԫ�رȽϣ�������������
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				//����
//				swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//void print_struct(struct stu s[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%s\n", s[i].name);
//		printf("%d\n", s[i].age);
//	}
//}
//
//void print_float(float arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.1f\n", arr[i]);
//	}
//}
//int main()
//{
//	float arr[10] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0.0 };
//	struct stu s1[3] = { { "zhangsan", 30 }, { "lisi", 20 }, { "wangwu", 10 } };
//	int sz1 = sizeof(s1) / sizeof(s1[0]);
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(s1,sz1,sizeof(s1[0]),cmp_by_name);
//	print_struct(s1,sz1);
//	bubble_sort(arr, sz2, sizeof(arr[0]), cmp_by_float);
//	print_float(arr,sz2);
//	/*int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ",s1[i].name);
//		printf("%d ",s1[i].age);
//	}*/
//	printf("\n");
//	return 0;
//}

//********************������***********************//

int main()
{
	//����������Ԫ�ص�ַ
	//����֮�����������⣺
	//1.sizeof(������)-��������ʾ��������
	//2.&������-��������ʾ��������
	int a[] = {1,2,3,4};//һά����
	printf("%d\n",sizeof(a));//16 �����������������ܴ�С-��λ���ֽ�
	printf("%d\n", sizeof(a+0));//4 �������������ʾ������Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*a));//4 ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�int�ʹ�С4�ֽ�
	printf("%d\n", sizeof(a+1));//4 ����������Ԫ�ص�ַ��+1��������һ��Ԫ�أ���ɵڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(a[1]));//4 ����ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&a));//4 &aȡ��������������ĵ�ַ
	printf("%d\n", sizeof(*&a)); //16 &a������ĵ�ַ������ĵ�ַ�����÷��ʵ���������Ĵ�С
	printf("%d\n", sizeof(&a+1));//4 &a����������õ�ַ��+1��ʾ����������飬����ʾ�û���һ����ַ
	printf("%d\n", sizeof(&a[0]));//��һ��Ԫ�صõ�ַ�ô�С
	printf("%d\n", sizeof(&a[0]+1));//��һ��Ԫ�صĵ�ַ+1����ɵڶ���Ԫ�صĵ�ַ

	//�ַ�����
	char arr[] = {'a','b','c','d','e','f'};
	printf("%c\n",sizeof(arr));//6 ������������ַ��������ռ�ÿռ��С��6*1=6���ֽ�
	printf("%c\n", sizeof(arr+0));//4 arr+0��Ȼ�Ǳ�ʾ��Ԫ�ص�ַ
	printf("%c\n", sizeof(*arr));//1 arr����Ԫ�ص�ַ��*arr������Ԫ��
	printf("%c\n", sizeof(arr[1]));//1
	printf("%c\n", sizeof(&arr));//4
	printf("%c\n", sizeof(&arr+1));//4
	printf("%c\n", sizeof(&arr[0]+1));//4

	char arr2[] = "abcdef";//��������������� a b c d e f \0
	printf("%c\n", sizeof(arr2));//7 �����������Ĵ�С
	printf("%c\n", sizeof(arr2 + 0));//4 �������������Ԫ�ص�ַ�Ĵ�С
	printf("%c\n", sizeof(*arr2));//1 *arr2����Ԫ�أ����������Ԫ�صĴ�С
	printf("%c\n", sizeof(arr2[1]));//1 ������ǵڶ���Ԫ�صĴ�С
	printf("%c\n", sizeof(&arr2));//4 ���������������ĵ�ַ
	printf("%c\n", sizeof(&arr2 + 1));//4 ����������������������ĵ�ַ
	printf("%c\n", sizeof(&arr2[0] + 1));//4 ������ǵڶ���Ԫ�صĵ�ַ

	return 0;
}
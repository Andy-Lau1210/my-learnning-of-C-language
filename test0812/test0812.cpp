// test0812.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//*******************理解switch的用法*********************//
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


//************************尝试使用scanf函数***********************//
//int main()
//{
//	int a=0, b=0, c=0;
//	scanf_s("%d%d%d",&a,&b,&c);
//	printf("a=%d,b=%d,c=%d\n",a,b,c);
//	return 0;
//}


//************************输出0到100中是3的倍数的数******************//
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


//**********************求两个数的最大公约数**************************//
//***************************辗转相除法**************************//
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
//	printf("最大公约数是%d\n",b);
//	return 0;
//}

//****************************计算闰年（四年一闰 百年不闰 四百年一闰）**************************//
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

//***********************计算100到200之间的素数*****************//
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		//判断i是否为素数，即产生2到i-1个数，判断是否能整除i,即所谓的试除法
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
//	printf("\n个数为%d\n",count);
//	return 0;
//}


//*******************************计算1到100之间出现数字9的数以及个数**********************//
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
//	printf("\n数量为%d\n",count);
//	return 0;
//}

//**************************计算1/1+1/2-1/3+1/4.......1/100的和*****************************//
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

//****************************求解十个数中的最大值****************************//
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
//	printf("最大数为%d\n",max);
//	printf("数组大小为%d\n",sizeof(arr));
//	return 0;
//}

//************************在屏幕上输出9*9乘法表*********************************//
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

//***********************计算n的阶乘*********************//
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


//*****************************猜数字游戏*************************//
//****************时间戳的概念：计算机当前的时间换算成秒减去计算机的起始时间，也就是1970年1月1日0时0分0秒**************8//
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
//		ret = rand()%100+1;//生成1-100的随机数
//		//printf("%d\n",ret);
//		while (1)
//		{
//			printf("请猜数字>:");
//			scanf_s("%d", &guess);
//			if (guess > ret) printf("猜大了\n");
//			else if (guess < ret) printf("猜小了\n");
//			else
//			{
//				printf("恭喜你，猜对了\n");
//				break;
//			}
//		}
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));//用时间戳来设置随机数的生成起点
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏...\n");
//			break;
//		default:
//		    printf("选择错误...\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//****************************关机小游戏****************************//
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("你的电脑将在一分钟后关机，输入：我是猪，取消关机\n请输入>:");
//	scanf_s("%s",input);
//	if (strcmp(input,"我是猪") == 0)//比较两个字符串，相等函数返回零
//	{
//		system("shutdown -a");
//		printf("Ok,你很聪明,已取消关机\n");
//	}
//	else goto again;
//	return 0;
//}

//********************用函数调用求两者最大值***************************//
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

//**********************二分查找********************//
//int binary_search(int arr[],int k,int sz)//函数内部想去计算所要查找的数组的个数是不靠谱的
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
//	//在一个有序数组中查找具体的某个数，找到的话返回下标，找不到返回-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	int k1 = 10;
//	int ret=binary_search(arr,k1,sz1);//这个地方传参仅仅传的是数组arr首元素的地址
//	if (ret == -1) printf("找不到\n");
//	else printf("找到了，下标是%d\n",ret);
//	return 0;
//}

//*************************调用一次 num就+1****************************//
//void add(int* p)
//{
//	//*p++;这样写，++作用于p
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

//**************用函数递归的方法顺序打印输入的每一位数**********************//

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

//***********************模拟strlen函数实现计算数组长度***********************//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//方法1
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}//递归的方法2
//int main()
//{
//	char arr[] = "bit321";
//	int len = my_strlen(arr);
//	printf("len=%d\n",len);
//	return 0;
//}

//*************************用两种方法求n的阶乘*******************//
//int fac1(int n)//循环的方式
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int fac2(int n)//递归的方式
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
//	printf("%d的阶乘为%d\n",n,ret);
//	return 0;
//}

//***************求第n个斐波那契数*******************//1 1 2 3 5 8 13 21 34 55
//int fib1(int n)//递归的方式
//{
//	if (n > 2)
//	{
//		return fib1(n - 1) + fib1(n - 2);
//	}
//	else
//		return 1;
//}
//int fib2(int n)//循环的方式
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

//**********************数组的创建、初始化、存储知识******************//
//#include<string.h>
//int main()
//{
//	int arr[10] = {1,2,3};//创建一个数组，内部元素10个，不完全初始化，前三个元素初始化为1，2，3，后面元素默认初始化为0
//	char arr1[5] = { 'a', 'b', 'c' };
//	char arr2[] = "你好呀";
//	printf("%d\n",sizeof(arr2));//7,sizeof用来计算arr2所占空间的大小，里面包括了\0一个字节
//	printf("%d\n",strlen(arr2));//6，strlen用来计算字符串的长度，即\0之前的字符长度
//	//strlen是针对字符串求长度的，而且只能针对字符串
//	//sizeof计算变量、数组、类型的大小，单位是字节
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";//arr1里面的元素是 a b c \0。
//	char arr2[] = {'a', 'b', 'c'};//arr2里面的元素是 a b c 后面没有\0。
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0; 
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//数组在内存中连续存放
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
//	int arr[][3] = {1,2,3,4,5,6};//二维数组创建不能省略列
//
//	return 0;
//}

//***********************冒泡算法排序**************************//
//void bubble_sort(int sz,int arr[])
//{
//	//首先确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟
//		int flag = 1;//假设刚开始数组已经排序好了
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
//	printf("%p\n",arr);//数组名是首元素地址，但是有两个例外,
//	//(1)sizeof(数组名)，此时数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位字节
//	//(2)&数组名，数组名代表整个数组，取地址取出的是整个数组的地址
//	printf("%p\n",&arr[0]);//首元素地址
//	printf("%d\n",arr);//首元素地址
//	printf("%p\n",&arr);//这里取地址取的是整个数组的地址
//	return 0;
//}

//*************************不使用中间变量交换两个数**********************//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//方法1，缺点是有可能两个int型变量相加会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//方法2
//	//a = a^b;
//	//b = a^b;
//	//a = a^b;
//	return 0;
//}

//**************************找出一个数组中只出现一次的数************************//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//方法（1）可以使用嵌套循环，将里面的数和其余每个数做比较，相等就count++，最后count只+了一次的就是只出现一次的那个数
//	//方法（2）使用异或，将全部数异或，最后得到的数就是只出现一次的那个数，因为异或满足交换律，所以不需要排序
//	for (i = 0; i < sz;i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("单身狗是：%d\n",ret);
//	return 0;
//}
//**********************************操作符****************************//
//算术操作符：+ - * / %
//1）除了%只能用于整数之外，其他都能用于整型和浮点型
//2）对于/，两个操作符全为整数则执行整数除法，只要有浮点型就执行浮点除法
//int main()
//{
//	double a = 5 % 2;
//	printf("a= %f\n",a);
//	return 0;
//}

//移位操作符：右移>> 左移<<
//有一操作符分为算术右移和逻辑右移，算术右移右边丢弃，左边补原符号位的数字；逻辑右移右边丢弃，左边补0
//补充说明，计算机内存中存储的是数字的补码，也就是负数取反再+1，正数则是本身
//左移操作符，符号位不便，左边丢弃，右边补0
//int main()
//{
//	int a = 8;
//	//int b = a >> 1;
//	//printf("右移b=%d\n",b);
//	int b = a << 1;
//	printf("左移b=%d\n", b);
//	return 0;
//}

//********************计算整型常量的二进制位中1的个数**************************//

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
//	printf("1的个数为%d\n",count);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s=a+5));//里面的运算只是摆设，不会进行实际运算
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

//**********************************逻辑与、或以及++前置和后置*************************//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;//&&逻辑与计算原则是左边为假，右边就不再进行计算，直接判断计算结果为假
//	i = a++ || ++b || d++;//；逻辑或计算原则是左边为真，右边就不再进行计算，直接判断计算结果为真
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
//	//使用struct stu这个类型创建一个学生对象s1，并初始化
//	struct stu s1 = {"张三",20,"20210713"};
//	struct stu* ps = &s1;
//	printf("%s\n",(*ps).name);//结构体变量.成员名
//	printf("%d\n",(*ps).age);//结构体变量.成员名
//	printf("%s\n", ps->name); //结构体指针->成员名
//	printf("%d\n",ps->age);//结构体指针->成员名
//	//两者效果一样
//	return 0;
//}

//*****************************整型提升**********************//
//int main()
//{
//	char a = 32;
//	char b = 127;
//	char c = a + b;//正数的整形提升高位补充0，负数整形提升高位补充1
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

//****************************指针相关知识***********************//
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
//	//int* p = NULL;//初始化指针变量，给指针赋值0置为空，防止出现野指针的情况
//	char str[] = "bit";
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz;i++)
//	//{
//	//	printf("%d\n",*p+i);
//	//}
//	//printf("%d\n",&arr[9]-&arr[0]);//指针-减指针得到的结果是中间元素的个数
//	int a = my_strlen(str);//利用指针模拟strlen函数
//	printf("%d\n",a);
//	return 0;
//}//允许指向数组元素的指针与指向数组元素最后一个元素后面的那个内存位置的指针进行比较，但是不允许与指向第一个元素的前一个内存位置的指针进行比较

//***********************统计二进制数（补码）1的个数*************************//
//int count_one(int a)
//{
//	int count = 0;
//	/*int j = 0;方法1
//	for(j = 0; j < 32;j++)
//	{
//		if ((a >> j) & 1 == 1)
//		{
//			count++;
//		}
//	}*/
//	while (a)//方法2
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

//*************************统计两个二进制数不同位的个数***********************//
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

//*********************打印n*n的乘法口诀表*****************//

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
//	struct stu s1 = {"张三","110",20,"男"};
//	print1(s1);
//	print2(&s1);//首选print2函数的指针传参方式，因为函数传参的时候参数是需要压栈的，如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销就会比较大，所以有可能导致性能的下降
//	return 0;//结论：结构体传参的时候，要传结构体的地址
//} 


//所有发生的事情都一定有迹可循，如果问心无愧，就不需要掩盖也就没有迹象了，如果问心有愧，就必然需要掩盖，那就一定有迹象，迹象越多就越容易顺藤儿上，这就是推理的途径，顺着这条途径顺流而下就是犯罪，逆流而上就是真相。
//一名优秀的程序员也是一名出色的侦探，每一次调试都是尝试破案的过程

//******************************C语言使用调试技巧****************************//
//F5-启动调试，一般和F9配合使用
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
//F9：设置断点和取消断点，再按下F5，程序执行到设置断点的地方停下
//F10：逐过程执行程序， 而不会进入到函数的内部
//F11：逐语句，当遇到函数的时候也不会放过函数内部的细节，会会进入函数的内部
//F5：启动调试，经常用来直接跳到下一个断点处，若调试时已设置好断点。按一下F5，程序执行到下一个执行逻辑断点处，而非物理上可见的断点
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

//*********************VS环境下C语言实用调试技巧************************//

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
//变量i和arr都是局部变量，储存在栈区当中
//1.栈区的默认使用规则是：先使用高地址处的空间，再使用低地址处的空间
//2.数组随着下标的增长，地址是由低到高变化。所以在读写arr[]的时候，总有一刻会遇到之前就定义好的i
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void my_strcpy(char* dest,char* src)//自定义的strcpy函数
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//此时*src就是'\0'
//}版本V1.0

//void my_strcpy(char* dest,char* src)
//{
//	while (*dest++ = *src++)//'\0'的ASCII码值为0
//	{
//		;
//	}
//}版本V2.0

//void my_strcpy(char* dest,char* src)
//{
//	if (dest != NULL && src != NULL)//在使用指针之前一定要先判断指针是否可用，是否为空指针或者野指针，防止程序挂掉
//	{
//		while (*dest++ = *src++)//'\0'的ASCII码值为0
//		{
//			;
//		}
//	}
//}//版本V3.0

//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL && src != NULL);//断言函数，括号里面的表达式为真则什么事都不发生，表达式为假，函数就会报错
//	while (*dest++ = *src++)//'\0'的ASCII码值为0
//	{
//		;
//	}
//}//版本V4.0

//void my_strcpy(char* dest, const char* src)//加个const修饰在*src之前，表示*src不能被改变，防止源地址被写反而copy错误
//{
//	assert(dest != NULL && src != NULL);//断言函数，括号里面的表达式为真则什么事都不发生，表达式为假，函数就会报错
//	while (*dest++ = *src++)//'\0'的ASCII码值为0
//	{
//		;
//	}
//}//版本V5.0

//char* my_strcpy(char* dest, const char* src)//加个const修饰在*src之前，表示*src不能被改变，防止源地址被写反而copy错误
//{
//	char* ret = dest;
//	assert(dest != NULL && src != NULL);//断言函数，括号里面的表达式为真则什么事都不发生，表达式为假，函数就会报错
//	while (*dest++ = *src++)//'\0'的ASCII码值为0
//	{
//		;
//	}
//	return ret;//给函数设置一个返回值，便于这个函数可以把返回值作为参数，用来被另外的函数调用
//}//版本V6.0
//int main()
//{
//	//strcpy 字符串拷贝函数
//	char arr1[] = "#######################";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//C语言中有许多类型，例如空类型：（我以前不清楚的概念）
//void 表示空类型（无类型）
//通常运用于函数的返回类型、函数的参数(放在定义的函数形参括号中，用于明确表示此函数无参数，如果调用函数时任带有实参，则会出现警告)、指针类型(void*类型指针)。
//大端存储模式：指数据的低位保存在内存的高地址处，而数据的高位保存在内存的低地址处；
//小端存储模式：指数据的低位保存在内存的低地址处，而数据的高位保存在内存的高地址处；

//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("n的值为：%d\n",n);
//	printf("*pfloat的值为：%f\n", *pfloat);
//
//	*pfloat = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("*pfloat的值为：%f\n", *pfloat);
//	return 0;
//}//浮点数形式放进去，整形取出来不对，整形放进去，浮点型取出来也不对
//浮点数在内存中的表示方法：(-1)^s*M*2^E，其中，s决定正负数；M为有效数字，大于等于，小于；E为指数位
//举例来说，十进制的5.0，二进制为101.0，相当于(-1)^0*1.01*2^2，进而得出，s为0，M为1.01，E为2
//32位浮点数，最高的一位留给s，接着的8位是指数位，剩下的23位为有效数字M
//64位浮点数，最高的一位留给s，接着的11位是指数位，剩下的52位为有效数字M
//存储M的时候，因为都是1.xxxxx的形式，所以规定只存入M的小数点后的数字
//存储E的时候，规定了E为无符号整数，意味着，E为8位时，它的取值范围位0~255，所以将E加中间值127再存入内存，E为11位时，中间值1023同理


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
//	char* p = "abcdef";//"abcdef"是一个常量字符串，p里面存放的是字符串首元素地址
//	printf("%c\n",*p);
//	printf("%s\n",p);
//	return 0;
//}

//学习网站：stackoverflow.com   segmentfault.com

//int main()
//{
//	char a1[] = "hello";
//	char a2[] = "hello";
//	char* a3 = "hello";
//	char* a4 = "hello";//a1 a2不同 a3 a4相同
//	return 0;
//}

//*****************数组指针*********************//

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* parr[] = { arr1, arr2, arr3 };//放的是首元素地址
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

//数组指针的意思是指向数组的指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//arr 是首元素地址   而&arr是整个数组的地址
//	int (*p)[10] = &arr; //此时的p就是数组指针
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",(*p)[i]);//数组指针的用法1
//		printf("%d ", *(*p + i));//数组指针的用法2
//	}
//
//	return 0;
//}

//数组指针的正确用法

//void print1(int arr[3][5],int x,int y)//参数是数组的形式
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
//void print2(int (*p)[5],int x,int y)//参数是指针的形式
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//和printf("%d ",p[i][j])等价
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
//		printf("%d ",*(arr+j));//四种写法效果相同
//	}
//	return 0; 
//}

//二维数组传参

// void test1(int arr[3][5])
//{}
// void test2(int arr[][5])//二维数组传参，参数部分行可以省略
//{}
// void test3(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = {0};
//	test1(arr);
//	test2(arr);
//	test3(arr);//二维数组首元素地址指的是第一行的地址,是一个一维数组的地址
//	return 0;
//}

//数组指针是指向数组的指针
//函数指针是指向函数的指针 存放函数地址的指针 

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
//	printf("%p\n",&Add);//&函数名 和 函数名 都是函数的地址
//	printf("%p\n",Add);
//	int (*pa)(int, int) = Add;//函数指针定义 把pa去掉，int (*)(int, int) 是pa变量的类型 函数指针类型
//	printf("%d\n",(pa)(2,3));//几种写法都是可以的 *在这里没有作用
//  printf("%d\n",pa(2, 3));
//	printf("%d\n",(*pa)(2,3));
//	printf("%d\n",(**pa)(2,3));
//	printf("%d\n",(***pa)(2,3));
//	void(*p)(char*) = print;
//	(*p)("hello");
//	return 0;
//}
//
//void(*   signal(int, void(*)(int))   )(int);//signal是一个函数声明，函数的两个参数一个是int型，一个是函数指针类型，该函数指针指向的函数的返回类型是void，参数是int型。signal函数的返回类型是函数指针类型
////也可以这样写:（简化版）
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);


//***************函数指针数组*****************//
//定义一个元素为函数指针的数组：
//int (*p[10])();正确
//int(*)() p[10];错误
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
//	int(*p)(int, int) = Add;//函数指针
//	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};//定义一个类型相同的函数指针数组，数组元素4个
//	int i = 0;
//	for (i = 0; i < 4;i++)
//	{
//		printf("%d\n", parr[i](2,3));
//	}
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
////写一个函数指针数组，能够存放4个my_strcpy函数的地址
//
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*pfarr[4])(char*, const char*) = { my_strcpy };


//*****************简易计算器*********************//
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
//	int(*parr[5])(int, int) = { 0, Add, Sub, Mul, Div };//用函数指针数组的形式，可以避免使用较多的case语句，后面添加其他算法也更加方便
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d",&input);
//		if (input>=1&&input<=4)
//		{
//			printf("请输入两个操作数:>");
//			scanf_s("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input==0)
//		{
//			printf("退出...\n");
//		}
//		else
//		{
//			printf("选择错误...\n");
//		}
//		/*if (input == 1 || input == 2 || input == 3 || input == 4)
//		{
//			printf("请输入两个操作数:>");
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
//			printf("已退出...\n");
//			break;
//		default:
//			printf("选择错误...\n");
//			break;
//		}*/
//	}while(input);
//	return 0;
//}

//**************回调函数***************//
//回调函数就是一个通过函数指针调用的函数，如果把函数的地址作为参数传递给另一个函数，当这个被用来调用其所指向的函数时，我们就说这是回调函数
//利用函数指针，把函数的地址当作参数进行传参，传递到另外一个函数进行调用
//void calc(int (*pf)(int,int))
//{ 
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf_s("%d%d",&x,&y);
//	printf("%d\n",(*pf)(x,y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
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
//			printf("退出...\n");
//			break;
//		default:
//			printf("输入错误...\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//**********指向函数指针数组的指针************//
//int main()
//{
//	int arr[10] = {0};
//	int (*p)[10] = &arr;//数组指针，指向的是arr这个数组的地址
//
//	int(*parr[4])(int, int);//是一个函数指针数组，数组元素4个，元素类型为int (*)(int,intp)
//	int(*(*pparr)[4])(int, int) = &parr;//pparr是数组指针，指向的是有4个元素的数组，数组元素类型是int(*)(int,int)型函数指针
//	return 0;
//}

 //qsort--可以排序任意类型的数据

//*************重写冒泡函数**************//
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//一趟冒泡排序
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
//	//return *(float*)e1 - *(float*)e2;//浮点数相减，返回小于1的数，强制类型转换会变成0，所以不建议
//	//正确的编程方式
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
//	qsort(s1, sz, sizeof s1[0], cmp_struct_by_name);//*****************qsort函数的正确用法*****************//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ",s1[i].name);
//		printf("%d ", s1[i].age);
//	}
//	printf("\n");
//	return 0;
//}

//void* 是无类型的指针，可以接受任意数据类型的地址，对void*类型的指针不能进行解引用操作，也不能进行加减整数的操作

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
//	return *(float*)e1- *(float*)e2;//此写法有缺陷
//}
//
////重新理解qsort函数，自己编一遍
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)
//		{
//			//两个元素比较，决定交不交换
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				//交换
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

//********************笔试题***********************//

int main()
{
	//数组名是首元素地址
	//除此之外有两个例外：
	//1.sizeof(数组名)-数组名表示整个数组
	//2.&数组名-数组名表示整个数组
	int a[] = {1,2,3,4};//一维数组
	printf("%d\n",sizeof(a));//16 计算的是整个数组的总大小-单位是字节
	printf("%d\n", sizeof(a+0));//4 数组名在这里表示的是首元素地址，a+0还是首元素地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*a));//4 数组名表示首元素地址，*a就是首元素，int型大小4字节
	printf("%d\n", sizeof(a+1));//4 数组名是首元素地址，+1代表跳过一个元素，变成第二个元素的地址
	printf("%d\n", sizeof(a[1]));//4 计算第二个元素的大小
	printf("%d\n", sizeof(&a));//4 &a取出的是整个数组的地址
	printf("%d\n", sizeof(*&a)); //16 &a是数组的地址，数组的地址解引用访问的整个数组的大小
	printf("%d\n", sizeof(&a+1));//4 &a是整个数组得地址，+1表示跳过这个数组，最后表示得还是一个地址
	printf("%d\n", sizeof(&a[0]));//第一个元素得地址得大小
	printf("%d\n", sizeof(&a[0]+1));//第一个元素的地址+1，变成第二个元素的地址

	//字符数组
	char arr[] = {'a','b','c','d','e','f'};
	printf("%c\n",sizeof(arr));//6 计算的是整个字符串数组的占用空间大小，6*1=6个字节
	printf("%c\n", sizeof(arr+0));//4 arr+0任然是表示首元素地址
	printf("%c\n", sizeof(*arr));//1 arr是首元素地址，*arr就是首元素
	printf("%c\n", sizeof(arr[1]));//1
	printf("%c\n", sizeof(&arr));//4
	printf("%c\n", sizeof(&arr+1));//4
	printf("%c\n", sizeof(&arr[0]+1));//4

	char arr2[] = "abcdef";//数组里面的内容是 a b c d e f \0
	printf("%c\n", sizeof(arr2));//7 计算的是数组的大小
	printf("%c\n", sizeof(arr2 + 0));//4 计算的是数组首元素地址的大小
	printf("%c\n", sizeof(*arr2));//1 *arr2是首元素，计算的是首元素的大小
	printf("%c\n", sizeof(arr2[1]));//1 计算的是第二个元素的大小
	printf("%c\n", sizeof(&arr2));//4 计算的是整个数组的地址
	printf("%c\n", sizeof(&arr2 + 1));//4 计算的是跳过整个数组过后的地址
	printf("%c\n", sizeof(&arr2[0] + 1));//4 计算的是第二个元素的地址

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000
//	//11111111111111111111111110000000
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)  //死循环
//	{
//		printf("%u ", i);
//	}
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 7;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <n-i-1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <6; i++)
//	{
//		for (j = 0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 11 - 2 * i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n == 1)
//	{
//		printf("一共可以喝一瓶汽水\n");
//	}
//	else if (n > 1)
//	{
//		printf("一共可以喝%d瓶汽水\n",2*n-1);
//	}
//	return 0;
//}


int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("%d %d", a + b, c);
	return 0;
}
//0000 0000 0000 0000 0000 0001 0010 1100
//0000 0000 0000 0000 0000 0000 0010 1100
//
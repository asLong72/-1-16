#include <stdio.h>
#include <stdlib.h>

//void _1_(int a[]);
//void _2_(int a[]);
//void _3_(int a[]);
//int main()
//{
//	int a[10];
//	_1_(a);
//	_2_(a);
//	_3_(a);
//	return 0;
//}
//void _1_(int a[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//}
//void _2_(int a[])
//{
//	int max = a[9], min = a[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (max<a[i])
//		{
//			max = a[i];
//			a[i] = a[9];
//			a[9] = max;
//		}
//		if (min > a[i])
//		{
//			min = a[i];
//			a[i] = a[0];
//			a[0] = min;
//		}
//	}
//}
//void _3_(int a[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\t", a[i]);
//	}
//}

void Changer(int a[], int n);
int main()
{
	int* a, n;
	scanf("%d", &n);
	a = (int*)malloc((sizeof(int)) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	Changer(a, n);
	return 0;
}

void Changer(int a[], int n)
{
	int m = 0, *z;
	scanf("%d", &m);
	z = (int*)malloc((sizeof(int)) * n);
	for (int i = 0; i < n-m; i++)
	{
		
		if (n - m + i<n)
		{
			z[i] = a[n - m + i];
		}
		z[m + i] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", z[i]);
	}
}
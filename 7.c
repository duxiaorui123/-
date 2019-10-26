//# include <stdio.h>
//
//int main()
//{
//	int i, a, b, c, d, e, f;
//	int n;
//	printf("输入一个正整数(1<=n<=54):");
//	scanf_s("%d", &n, sizeof(n));
//	for (i = 10000; i <= 999999; ++i)
//	{
//		f = i / 1 % 10;
//		e = i / 10 % 10;
//		d = i / 100 % 10;
//		c = i / 1000 % 10;
//		b = i / 10000 % 10;
//		a = i / 100000 % 10;
//
//		if (a == f && b == e && c == d)
//		{
//			if (n == a + b + c + d + e + f)
//				printf("%d\n", i);
//		}
//	}
//	return 0;
//}
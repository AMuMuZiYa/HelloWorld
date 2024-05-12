//#include<stdio.h>
//
//int main()
//{
//	//整数类型(short,int,long,long long)
//	//short(-32768~32767)
//	short a = 100;
//	printf("%d\n", a);
//
//	//int(-2147483648~2147483647)
//	int b = 1000;
//	printf("%d\n", b);
//
//	//long(-2147483648~2147483647)(=int)
//	long c = 10000L;
//	printf("%ld\n", c);
//
//	//long long (C99)(超长整数)(19位)
//	long long d = 100000LL;
//	printf("%lld\n", d);
//
//
//	//测试数据类型字节长度
//	//使用sizeof测试
//
//	//short
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(a));
//
//	//int
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(b));
//
//	//long
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(c));
//
//	//long long
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(d));
//
//
//	//扩展
//	//1.在类型的后面可以跟上int,除int以外,eg:
//	short int num1 = 100;
//	printf("%d\n", num1);
//
//	long int num2 = 10000L;
//	printf("%ld\n", num2);
//
//	long long num3 = 100000LL;
//	printf("%lld\n", num3);
//
//	//2.整数类型还可以分有序和无序
//
//	//在整数默认的情况下是有序,则可以省略signed
//	signed short no1 = -100;
//	short no3 = -100;
//	printf("%d\n", no1);
//	printf("%d\n", no3);
//
//	unsigned short no2 = 100;
//	printf("%u\n", no2);
//
//	Note:
//	signed和unsigned只能与整数类型搭配使用
//
//	return 0;
//
//}
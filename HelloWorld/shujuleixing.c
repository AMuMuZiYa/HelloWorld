//#include<stdio.h>
//
//int main()
//{
//	//��������(short,int,long,long long)
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
//	//long long (C99)(��������)(19λ)
//	long long d = 100000LL;
//	printf("%lld\n", d);
//
//
//	//�������������ֽڳ���
//	//ʹ��sizeof����
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
//	//��չ
//	//1.�����͵ĺ�����Ը���int,��int����,eg:
//	short int num1 = 100;
//	printf("%d\n", num1);
//
//	long int num2 = 10000L;
//	printf("%ld\n", num2);
//
//	long long num3 = 100000LL;
//	printf("%lld\n", num3);
//
//	//2.�������ͻ����Է����������
//
//	//������Ĭ�ϵ������������,�����ʡ��signed
//	signed short no1 = -100;
//	short no3 = -100;
//	printf("%d\n", no1);
//	printf("%d\n", no3);
//
//	unsigned short no2 = 100;
//	printf("%u\n", no2);
//
//	Note:
//	signed��unsignedֻ�����������ʹ���ʹ��
//
//	return 0;
//
//}
//#include<stdio.h>
//
//int main()
//{
//	/*
//	while语句的基本格式:
//	int i = 1;//初始化语句
//	while (i<=3)//条件判断语句
//	{
//	printf("输出三遍\n");//循环体
//	i++;//条件控制语句
//	}
//	1.判断条件
//	2.执行循环体
//	3.重复执行或者退出
//	*/
//	/*int i = 1;
//	while (i <= 3) {
//		printf("输出三遍\n");
//		i++;
//	}*/
//	/*
//	for和while之间的区别:
//	1.在for循环中:知道循环的次数以及循环的范围
//	2.在while循环中,不知道循环的次数以及循环的范围,只知道循环结束的条件
//		因为while的变量是在while循环体外面的,那么变量数量多的时候则不知道
//		变量的取值,而只知道变量结束条件
//	eg1:计算1~100的累加的时候我们则需要用到for
//	eg2:读取文件的信息的时候我们则需要用到while
//	*/
//
//	//练习1:判断一个数是否为2的幂次方
//	//方法1:
//	/*double num1;
//	printf("请输入一个任意的数字:");
//	scanf("%lf", &num1);
//	if (num1 == 1) {
//		printf("这个数是2的幂次方");
//	}
//	else {
//		while (num1 > 1) {
//			num1 = num1 / 2;
//			num1 < 2;
//		}
//		if (num1 == 1) {
//			printf("这个数是2的幂次方");
//		}
//		else {
//			printf("这个数不是2的幂次方");
//		}
//	}*/
//	//方法2:
//	/*int num1;
//	printf("请输入任意一个数字:");
//	scanf("%d", &num1);
//	if (num1 == 1) {
//		printf("yes\n");
//	}
//	else {
//		while (num1 > 1 && num1 % 2 == 0) {
//			num1 = num1 / 2;
//		}
//		if (num1 == 1) {
//			printf("yes\n");
//		}
//		else {
//			printf("no\n");
//		}
//	}*/
//
//	//练习2:已知珠穆朗玛峰的高度是8844.43米(8844430毫米)
//	//求一张一毫米厚的纸对折多少次可以达到这个高度
//	//int height = 8844430;
//	//int count = 0;
//	//double num = 0.1;
//	//while (num <= height) {//在判断条件中,
//	////写入的判断条件必须能让程序继续执行
//	//	num = num * 2;
//	//	count++;
//	//}
//	//printf("%d", count);
//
//	//练习3:将一个整数进行反转
//	//int a = 100;
//	//int b = 0;
//	//int c = 0;
//	//while (a != 0) {
//	//	c = a % 10;
//	//	b = b * 10 + c;
//	//	a = a / 10;
//	//}
//	//printf("%d\n", b);
//	//printf("%d", a);
//
//	//练习4:
//	//int a = 0;
//	//int b = 0;
//	//printf("请输入一个数字:");
//	//scanf("%d", &b);
//	//while (a*a <= b) {
//	//	a++;
//	//}
//	//printf("你输入的数字的算术平方根是:%d", a - 1);
//
//	//练习5:回文数即123和321,判断一个数字是否为回文数
//	//int a = 828;
//	//int b = 0;
//	//int c = 0;
//	//int d = a;
//	//while (a != 0) {
//	//	c = a % 10;
//	//	b = b * 10 + c;
//	//	a = a / 10;
//	//}
//	//if (d == b) {
//	//	printf("你输入的数是回文数!");
//	//}
//	//else {
//	//	printf("你输入的数不是回文数!");
//	//}
//
//	//练习6:被除数和除数,求余和商,不能使用乘法除法和取余运算符
//	/*
//	计算机的乘除法:
//	乘法:3*3 => 3+3+3
//	除法:9/3 => 9-3-3
//
//	9/3=3
//	那么,余数:0
//		商:3
//	*/
//	//int a;
//	//int b;
//	//int i = 0;
//	//printf("请输入两个数字:\n");
//	//scanf("%d %d", &a, &b);
//	//while (a >= b) {
//	//	a -= b;
//	//	i++;
//	//}
//	//printf("商是:%d;余数是:%d", i, a);
//
//
//
//
//
//
//
//}

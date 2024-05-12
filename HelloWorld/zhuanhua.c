//#include<stdio.h>
//
//int main()
//{
//
//	//第一种相加:
//
//	/*隐式转化
//	1.在遇到不同的数据类型相加的时候,小者首先变为大者之后再进行计算
//	2.char和short两个数据类型是首先变为int类型之后再计算
//	3.大小关系:double>float>long long>long>int>short>char
//	*/
//	/*强制转化
//	强制转化过程中系统会直接转化,不过应该书写转化过程提高代码可读性
//	格式:short a = short (a+b);
//	定义一个类型接受转化数据的值
//	*/
//	short a = 10;
//	short b = 10;
//	short c = (short)(a + b);
//	printf("%d\n", c);
//
//
//	//第二种相加:
//	//字符相加
//	char d = 'a';
//	int e = 'a' + 1;//其中字符取值对应的就是asc码
//	printf("%d", e);
//
//}
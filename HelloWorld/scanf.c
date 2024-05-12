//#include<stdio.h>
//
//int main()
//{
//
//	int a;
//	printf("请输入你的数据:");
//	scanf("%d", &a);
//	printf("你输入的数据是:%d\n", a);
//
//
//	//练习:
//	/*
//	在定义字符串上面:
//	如果字符串是英文,数字和字符,则占用一个字节
//	如果字符串中有英文,则中文占用两个字节
//	其中在结束光标的位置还有一个隐藏字节在
//	eg1:全英文状态下
//	char a[4] = "aaa";
//	eg2:中英文混合
//	char b[4] = "你a";
//	eg3:如果不想计算字符串的长度,则可以将字符串的长度设长一点
//	char c[100] = "这个字符串很长";
//	*/
//	/*
//	关于scanf的细节:
//	在使用这个函数的时候,其中""里面的内容和输出的内容应该一致
//	eg:
//	int age;
//	scanf("%d",&age);
//	则你输入int相关的数据
//
//	如果scanf里面还有其他的内容:
//	int age;
//	scanf("aaa%d",&age);
//	那么你在输入的时候则要在int相关的数据前面要输入aaa
//
//	*/
//
//	//练习1:
//	char b[7];
//	printf("你女朋友的名字是:");
//	scanf("%s", &b);
//	printf("你女朋友的名字是:%s\n", b);
//
//	//练习2:输入自己的年龄
//	int c;
//	printf("请输入你的年龄:");
//	scanf("%d", &c);
//	printf("你的年龄是%d岁\n", c);
//
//	//练习3:定义num1和num2,然后进行赋值,最后再求和
//	int num1, num2;
//	printf("请输入你的第一个数值:");
//	scanf("%d", &num1);
//	printf("请输入你的第二个数值:");
//	scanf("%d", &num2);
//	int num3 = num1 + num2;
//	printf("你的最终数据是:%d\n", num1 + num2);
//	printf("你的最终数据是:%d\n", num3);
//
//	//如果在使用scanf函数的时候一次性输入多个内容的时候:
//	int num4;
//	int num5;
//	printf("请分别输入你的两个数据:\n");
//	scanf("%d %d", &num4, &num5);
//	printf("你的最终数据是:%d\n", num4 + num5);
//
//	//练习:
//	//方法一:
//	char name[7];
//	int age;
//	float height;
//	printf("请输入你的姓名:");
//	scanf("%s", &name);
//	printf("请输入你的年龄:");
//	scanf("%d", &age);
//	printf("请输入你的身高:");
//	scanf("%f", &height);
//	printf("你的名字是:%s,你的年龄是:%d岁,你的身高是:%f米\n", name,age,height);
//
//	char name1[7];
//	int age1;
//	float height1;
//	printf("请分别输入你的名字,年龄,身高\n");
//	scanf("%s %d %f", &name1, &age1, &height1);
//	printf("你的名字是:%s,你的年龄是:%d岁,你的身高是:%f米", name1, age1, height1);
//
//	return 0;
//
//}
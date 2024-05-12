//#include<stdio.h>
//
//int main() 
//{
//
//	/*int week;
//	printf("输入今天是星期几:");
//	scanf("%d", &week);
//	switch (week) {
//	case 1:
//		printf("今天星期一");
//		break;
//	case 2:
//		printf("今天星期二");
//		break;
//	case 3:
//		printf("今天星期三");
//		break;
//	case 4:
//		printf("今天星期四");
//		break;
//	case 5:
//		printf("今天星期五");
//		break;
//	case 6:
//		printf("今天星期六");
//		break;
//	case 7:
//		printf("今天星期日");
//		break;
//	default:
//		printf("没有这个星期");
//		break;
//	}*/
//
//	//练习1:
//	/*
//	周一:跑步
//	周二:游泳
//	周三:慢走
//	周四:动感单车
//	周五:拳击
//	周六:爬山
//	周末:好好吃一顿
//	*/
//	/*int week;
//	printf("请输入今天是星期几:");
//	scanf("%d", &week);
//	switch (week) {
//	case 1:
//		printf("跑步");
//		break;
//	case 2:
//		printf("游泳");
//		break;
//	case 3:
//		printf("慢走");
//		break;
//	case 4:
//		printf("动感单车");
//		break;
//	case 5:
//		printf("拳击");
//		break;
//	case 6:
//		printf("爬山");
//		break;
//	case 7:
//		printf("好好吃一顿");
//		break;
//	default:
//		printf("没有这个星期");
//		break;
//	}*/
//
//
//	//细节:
//	/*
//	1.在switch后面只可以跟字符和实数
//	2.在switch中的case后面只可以跟字符和实数
//	3.在switch中case后面的值不可以重复
//	4.在switch中default可以任意交换位置
//	*/
//	//switch和if之间的比较
//	/*
//	switch主要是针对十个左右的判断
//	而且switch在执行过程中,执行的效率更加的高
//
//	if适用于范围广的判断,但是if的执行效率会比较慢
//	*/
//
//
//	//关于switch中case的讲解和练习
//	/*
//	1.case在没有遇到break的时候会一直穿透
//	2.case只会向下穿透
//	3.case如果一直穿透则会一直执行代码
//	*/
//
//	//练习1:
//	/*
//	通过不同月份来输出季节:
//	3,4,5为春季
//	6,7,8为夏季
//	9,10,11为秋季
//	12,1,2为冬季
//	*/
//	/*int number;
//	printf("请输入你现在的月份:");
//	scanf("%d", &number);
//	switch (number) {
//	case 3:
//	case 4:
//	case 5:
//		printf("你现在的季节是春季");
//		break;
//	case 6:
//	case 7:
//	case 8:
//		printf("你现在的季节是夏季");
//		break;
//	case 9:
//	case 10:
//	case 11:
//		printf("你现在的季节是秋季");
//		break;
//	case 12:
//	case 1:
//	case 2:
//		printf("你现在的季节是冬季");
//		break;
//	default:
//		printf("你输入的信息错误");
//	}*/
//
//	//练习2:
//	/*
//	拨打电话选择服务的时候:
//	按1:查询机票
//	按2:预定机票
//	按3:改签机票
//	按4和其它:退出服务
//	*/
//	int number;
//	printf("客户输出的按键数:");
//	scanf("%d", &number);
//	switch (number) {
//	case 1:
//		printf("查询机票");
//		break;
//	case 2:
//		printf("预定机票");
//		break;
//	case 3:
//		printf("改签机票");
//		break;
//	case 4:
//	case 5:
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//	case 0:
//		printf("退出服务");
//		break;
//	default:
//		printf("无效命令");
//	}
//
//}
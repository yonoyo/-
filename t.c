#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double add(double x, double y){
	return x + y;
}
double sub(double x, double y){
	return x - y;
}
double mul(double x, double y){
	return x*y;
}
double div(double x, double y){
	return x / y;
}
void menu(){
	printf("******1.加法******\n");
	printf("******2.减法******\n");
	printf("******3.乘法******\n");
	printf("******4.除法******\n");
}
int main(){
	int input = 0;
	double a = 0, b = 0;
	do{
		menu();
		printf("请选择：\n");
		scanf("%d",&input);
		if (input <= 0 || input > 4)
			return 0;
		printf("请输入两个数：\n");
			scanf("%lf%lf", &a, &b);
		switch (input){
		case 1:printf("%lf\n", add(a, b));
			break;
		case 2:printf("%lf\n", sub(a, b));
			break;
		case 3:printf("%lf\n", mul(a, b));
			break;
		case 4:printf("%lf\n", div(a, b));
			break;
		default:printf("输入错误\n");
			break;
		}
		}while (input);

	return 0;
}
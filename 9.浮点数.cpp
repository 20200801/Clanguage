#include<stdio.h>
int main(){
	float a = 12.34519872123F;
	printf("a = %.8f\n",a); 
	double b = 12.34519872123;
	printf("b = %.11f\n",b);
	//12.4--double 12.4f--float
	float c = 12.3456;
	//将double的数赋值给float类型，有可能发生数据溢出 
	return 0;
} 

#include<stdio.h>
int main(){
	//1.d格式--->输出整型数据 
	printf("No.1:%d\n",122);
	printf("No.2:%5d\n",122);//输出数据占5列（向右对齐）
	printf("No.3:%-5d\n",122);//输出数据占5列（向左对齐）
	//2.c格式--->单个字符 
	printf("No.4:%c\n",'\101');
	//3.f格式--->浮点型数据（float,double）
	printf("No.5:%f\n",3.14);//3.140000
	float a = 10.0f;
	printf("No.6:%20.15f\n",a/3);//占20列，15位小数 
	printf("No.7:%-20.15f\n",a/3);
	//4.e格式--->结果为指数形式
	printf("No.8:%25.15e\n",a/3);
	printf("No.9:%e\n",190.34);
	printf("No.10:%e\n",0.002345);
	//5.o格式-- >将一个数按照8进制输出 
	printf("No.11:%o\n",1001);
	//6.x格式-- >将一个数按照16进制输出 
	printf("No.12:%x\n",1001);
	//7.u格式-->输出一个无符号的数
	printf("No.13:%u\n",1001);
	return 0;
} 

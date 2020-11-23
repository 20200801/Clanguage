#include<stdio.h>
int main(){
	int a;//定义变量，在内存中开辟4Byte大小
	a = 10;//给变量赋值 
	//1Byte = 8bit 
	//4Byte = 32bit
	//00000000 00000000 00000000 00000000
	//11111111 11111111 11111111 11111111
	//01111111 11111111 11111111 11111111
	//1111=+7
	//0111=-7
	printf("a=%d\n",a);
	short b = 12;//短整型，在内存中开辟2Byte 
	printf("b=%d\n",b);
	long c = 13;//长整型，内存中开辟4Byte 
	printf("c=%d\n",c); 
	long long d = 13;//双长型， 内存中开辟8Byte
	printf("d=%d\n",d); 
	return 0;
} 

#include<stdio.h>
int main(){
	//补码 
	unsigned int a = 100;
	//11111111 11111111 11111111 11111111
	//00000000 00000000 00000000 00000000
	//1111=15
	//0000=0
	printf("a = %d\n",a);
	unsigned int b = -100;
	printf("b = %d\n",b);
	printf("b = %u\n",b);//%u无符号数的输出格式 
	//0110 
	return 0;
} 

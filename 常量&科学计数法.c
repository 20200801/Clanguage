#include <stdio.h>
int main(){
	//整型常量 
	int a=100;
	printf("a=%d\n",a);
	
	//实型常量
	float b=12.3;//单精度浮点型  十进制表示
	printf("b=%f\n",b);
	
	//科学计数法表示
	float c=12.5e3;// 12.5*10^3       //e 或 E 都可以
	printf("c=%f\n",c);
	
	float d=2.3e-3;// 2.3*10^-3
	printf("d=%f\n",d);
	
	return 0;  
} 

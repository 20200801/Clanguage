#include<stdio.h>
int main(){
	int a = 17;
	int b = 5;
	int c; 
	c = a+b; //=赋值运算符   +算术运算符  
	//算术运算符的优先级高于赋值运算符 
	printf("c= %d\n",c);
	c = a-b;
	printf("c= %d\n",c);
	c = a*b;
	printf("c= %d\n",c);
	c = a/b;//17/5 = 3  int/int=int 
	printf("c= %d\n",c);
	c = a%b;//2.3%2
	printf("c= %d\n",c);
	//%两边的值，必须是整型 
	//printf("c= %d\n",2.3%2.3);错误 
	return 0;
} 

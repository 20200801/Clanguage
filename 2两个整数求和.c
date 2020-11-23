#include<stdio.h>
int main(){
	//程序-->内存 --->执行 
	int a,b,sum;//定义变量,在内存中分配空间 
	a = 100;
	b = 30;//给变量赋值 
	sum = a+b;
	printf("你好sum=%d\n",sum);	
	//"sum=%d\n"输出格式 
	//sum输出的变量 %d表示输出一个整数 
	//\n回车换行
	printf("hello"); 
	return 0;
} 

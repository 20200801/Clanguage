#include<stdio.h>
int main(){
	//2.函数的声明--告诉编译器，定义了一个函数
	void print_info();
	//3.使用函数（调用函数） 
	print_info();
	print_info();
	return 0;	 
}
//1.定义自定义函数 
void print_info(){//void返回值(空)  print_info函数名称 
//()无参的函数 
	printf("hello world!\n");//函数的操作 
} 

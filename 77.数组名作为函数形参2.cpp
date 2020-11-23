#include<stdio.h>
int main(){
	void fun1(int);
	void fun2(int[]);
	int x = 10;
	fun1(x);//单向传递的值 
	printf("x = %d\n",x);
	int y = 10;
	fun2(&y);//单向传递的地址 
	printf("y = %d\n",y);
	return 0;	 
}
void fun1(int a){
	a = 100;
} 
void fun2(int a[]){
	a[0] = 100;
}

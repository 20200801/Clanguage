#include<stdio.h>
int main(){
	void print_info();
	int sum(int,int);//int sum(int a,int b);
	
	print_info();
	int x =3;
	int y = 4;
	int s = sum(x,y);//实参 （实际参数） 
	printf("s = %d",s);
	return 0;	 
}
void print_info(){
	printf("hello world!\n");
} 
//求两个整数的和 
//形参 
int sum(int a,int b){//函数执行完后，会带出int类型的值。 
	int c = a+b;
	return c;
} 

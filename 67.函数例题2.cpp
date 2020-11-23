#include<stdio.h>
int main(){
	void fun(int);
	int a = 1;
	fun(a);
	printf("%d",a); 
	return 0;	 
}
void fun(int a){
	a = 100;
}


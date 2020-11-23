#include<stdio.h>
int main(){
	void swap(int*,int*);
	int a = 10,b=20;
	int *p1=&a;
	int *p2 = &b;
	if(a<b) swap(p1,p2);
	printf("max=%d,min=%d\n",a,b);
	return 0;	 
}
//如果指针变量作为形参，实参向形参传递地址 
void swap(int *p1,int *p2){
	int *p;
	p = p1;
	p1 = p2;
	p2 = p;
}

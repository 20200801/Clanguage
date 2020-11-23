#include<stdio.h>
int main(){
	int a =100;
//	int *p1;//定义了一个指针变量
//	p1 = &a;
	int*   p1 = &a;
	*p1 = 88; 
	printf("a = %d\n",a);
	printf("a = %d\n",&a);
	printf("a = %d\n",p1);
	printf("a = %d\n",*p1);
	return 0;	 
}


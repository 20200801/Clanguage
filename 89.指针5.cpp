#include<stdio.h>
int main(){
	int a[10] ={3,1,2,8,6,1,6,10,7,8}; 
	//a    a[0]//a+1  a[1]
	int *p;
	p = a;
	printf("%d\n",a);
	printf("%d\n",p);
	printf("%d\n",a+1);
	printf("%d\n",p+1);
	printf("%d\n",a[1]);
	printf("%d\n",*(p+1));
	printf("%d\n",a[3]);
	printf("%d\n",*(p+3));
	printf("%d\n",*(a+3));
	return 0;	 
}


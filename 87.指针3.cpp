#include<stdio.h>
int main(){
	int a =10,b=20;
	int *p1;int *p2; 
	p1 = &a;p2 = &b;
	int c;
	int *p=&c;
	if(a<b){
		*p =*p1;*p1 =*p2;
		*p2=*p;
	}
	printf("max=%d,min=%d\n",*p1,*p2);
	printf("max=%d,min=%d\n",a,b);
	printf("%d\n",*p);
	return 0;	 
}


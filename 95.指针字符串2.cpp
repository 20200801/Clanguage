#include<stdio.h>
int main(){
	char a[] = "student";//\0
	char b[20];
	char *p1,*p2;
	p1 = a;
	p2 = b;
	for(;*p1!='\0';p1++,p2++){
		*p2 = *p1;
	}
	*p2 = '\0';
	printf("%s",b);
	return 0;	 
}


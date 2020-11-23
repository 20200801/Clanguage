#include<stdio.h>
int main(){
	int a[10] ={3,1,2,8,6,1,6,10,7,8}; 
	for(int i=0;i<=9;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(int i=0;i<=9;i++){
		printf("%d\t",*(a+i));
	}
	printf("\n");
	int *p = a;
	for(int i=0;i<=9;i++){
		printf("%d\t",*(p+i));
	}
	return 0;	 
}


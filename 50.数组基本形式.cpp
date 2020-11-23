#include<stdio.h>

int main(){
	//c# 
	//1.
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	for(int i=0;i<=9;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	//2.
	int b[10]={1,2,3,4};
	for(int i=0;i<=9;i++){
		printf("%d\t",b[i]);
	}
	printf("\n");
	//3.
	int c[10] = {0};
	for(int i=0;i<=9;i++){
		printf("%d\t",c[i]);
	}
	printf("\n");
	//4.
	int d[] = {1,2,3,6,7,8};
	for(int i=0;i<=5;i++){
		printf("%d\t",d[i]);
	}
	printf("\n");
	int j = 10;
	int array[j];
	return 0;
}


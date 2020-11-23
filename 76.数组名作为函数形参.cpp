#include<stdio.h>
int main(){
	void fun(int[]);
	int a[5] ={1,2,3,4,5}; 
	for(int i=0;i<=4;i++){
		printf("%5d",a[i]);
	}
	printf("\n");
	fun(&a[0]);//a
	for(int i=0;i<=4;i++){
		printf("%5d",a[i]);
	}
	return 0;	 
}//引用传递 
void fun(int b[]){//int b[]--->只能接收地址 
	b[4] = 100;
} 

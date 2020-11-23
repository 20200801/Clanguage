#include<stdio.h>

int main(){
	int max(int,int);
	printf("请输入两个整数\n");
	int a,b;
	scanf("%d%d",&a,&b); 
	int s = max(a,b);
	printf("s = %d",s);
	return 0;	 
}
int max(int a,int b){
	int z;
	if(a>b){
		z = a;
	}else{
		z = b; 
	} 
	return z;
}



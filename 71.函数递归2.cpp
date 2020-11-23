#include<stdio.h>
int main(){
	int fun(int n);
	int s = fun(5);
	printf("%d",s);
	return 0;	 
}
int fun(int n){
	int f;
	if(n==1||n==0){
		f = 1;
	}else if(n>=2){
		f = fun(n-1)*n;
	}
	return  f;
}

#include<stdio.h>
int main(){
	int fun(int x);
	printf("%d\n",fun(1));//12
	printf("%d\n",fun(1));
	printf("%d\n",fun(1));
	return 0;	 
}
int fun(int x){
	static int a = 10;
	a=a+1;
	return (a+x);
}


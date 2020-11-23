#include<stdio.h>
int main(){
	int n;//要判断的这个数 
	scanf("%d",&n);
	int i;
	for(i=2;i<=n-1;i++){
		if(n%i==0) break;
	} 
	//n=5
	//i=2  2<=4 (ok) 5%2
	//i=3  3<=4(ok)  5%3
	//i=4  4<=4(ok)  5%4
	//i=5
	if(i<n) printf("不是素数\n");
	else printf("是素数\n"); 
	return 0;
	//求100-200之间所有的素数。 
} 

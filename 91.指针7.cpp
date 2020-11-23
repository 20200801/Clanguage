#include<stdio.h>
int main(){
	int a[5]; 
	int *p;
	p = a;
	for(int i=0;i<=4;i++){
		scanf("%d",p);
		p = p+1;//p++
	}
	p = a;
	for(int i=0;i<=4;i++){
		printf("%d\t",*(p+i));
	}
	return 0;	 
}


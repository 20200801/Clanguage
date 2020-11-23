#include<stdio.h>
#include<stdlib.h> 
int main(){
	int *p1;
	//p1 = (int *)malloc(20); //分配5个int类型大小的空间 
	p1 = (int *)malloc(sizeof(int)*5); 
	for(int i=0;i<=4;i++){
		scanf("%d",p1+i);
	}
	for(int i=0;i<=4;i++){
		printf("%d\n",*(p1+i));
	}
	return 0;	 
}


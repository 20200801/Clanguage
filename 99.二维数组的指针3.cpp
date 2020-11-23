#include<stdio.h>
int main(){//RGB 
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{4,3,2,1}};
	int (*p)[4];//表示指向行的指针，这一行有4个元素。
	p = a;
	int i,j; 
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
		printf("%4d",*(*(p+i)+j));	
		}
		printf("\n");
	}
	return 0;	 
}


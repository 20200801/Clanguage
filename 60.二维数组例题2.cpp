#include<stdio.h>
int main(){
	int a[10][10]={0};
	for(int i=0;i<=9;i++){
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for(int i=2;i<=9;i++){
		for(int j=1;j<=9;j++){
			a[i][j] = a[i-1][j-1]+a[i-1][j];
		}
	}
	for(int i=0;i<=9;i++){
		for(int j=0;j<=i;j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	} 
	return 0;
} 

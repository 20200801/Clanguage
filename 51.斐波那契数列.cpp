#include<stdio.h>
int main(){
	//斐波那契数列fibonacci 
	//1 1 2 3 5 8 13...
	//用数组求解fibonacci的前20项
	int f[20]={1,1}; 
	for(int i=2;i<=19;i++){
		f[i] = f[i-2]+f[i-1];
	}
	for(int i=0;i<=19;i++){
		if(i%5==0) printf("\n");
		printf("%d\t",f[i]);
	}
	return 0;
}


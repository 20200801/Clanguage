//1+2+3+....+100   sum() 
//sum(100)=sum(99)+100
//sum(99)=sum(98)+99
//sum(n)=sum(n-1)+n
//sum(1)=1
#include<stdio.h>
int main(){
	int sum(int n);
	int sum1 = sum(100);
	printf("%d",sum1);
	return 0;	 
}
int sum(int n){
	if(n==1) return 1;
	else return sum(n-1)+n;
}

#include<stdio.h>
int main(){
	float a = 2;//分子 
	float b = 1;//分母
	float sum = 0.0f;//和
	for(int i=1;i<=20;i++){
		sum = sum+a/b;
		a = a+b;//新的分子 
		b = a-b;//新的分母 
	} 
	printf("%f",sum);
	//1.sum = 0+2/1  a = 3 b =2
	//2.sum = 0+2/1+3/2 a=5 b=3
	//3.sum = 0+2/1+3/2+5/3
	return 0;	 
}



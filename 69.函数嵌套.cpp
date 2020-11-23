#include<stdio.h>
int main(){
	int max4(int,int,int,int);//1 
	int a=1,b=4,c=20,d=13;//2 
	int max = max4(a,b,c,d);//3 
	printf("max = %d",max);//19 
	return 0;//20 
}
int max4(int a,int b,int c,int d){//4 
	int max2(int,int);//ÉùÃ÷ 5 
	int m = max2(a,b);//6 
	m = max2(m,c);//10 
	m = max2(m,d);//14 
	return m;//18 
}
int max2(int a,int b){//7 11 15 
	if(a>b) return a;//8 12 16 
	else return b;//9 13 17 
} 

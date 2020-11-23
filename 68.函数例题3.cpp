#include<stdio.h>
int main(){
	float max(float a,float b);
	float a,b;
	scanf("%f%f",&a,&b);
	int s = max(a,b);
	printf("%d",s);
	return 0;	 
}
int max(float a,float b){
	return a>b?a:b;
}

#include<stdio.h>
int main(){
	float a[20];//·Ö×Ó
	a[0] = 2;a[1] = 3;
	for(int i=2;i<=19;i++){
		a[i] = a[i-1]+a[i-2];
	} 
	float b[20];//·ÖÄ¸
	b[0] = 1;b[1] = 2;
	for(int i=2;i<=19;i++){
		b[i] = b[i-1]+b[i-2];
	}
	float sum = 0;
	for(int i=0;i<=19;i++){
		sum = sum +a[i]/b[i];
	}
	printf("%f",sum);
	return 0;	 
}



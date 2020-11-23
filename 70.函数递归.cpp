#include<stdio.h>
int main(){
	//5! = 5*4*3*2*1
	int n = 1;
	for(int i=1;i<=5;i++){
		n = n * i;
	}
	printf("%d",n);
	return 0;	 
}


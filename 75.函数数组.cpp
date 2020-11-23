#include<stdio.h>
int main(){
	int com(int,int);
	int a[10] = {2,6,10,4,8,30,14,19,20,11}; 
	int max = a[0];//a a+2  &a[4]
	int i = 0;
	for(int j=1;j<=9;j++){
		if(com(max,a[j])>max) {
			max = com(max,a[j]);
			i = j;}	}
	printf("max = %d,index = %d",max,i);
	return 0;	 
}
int com(int a,int b){
	if(a>b) return a;
	else return b;
}

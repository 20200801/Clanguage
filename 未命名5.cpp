#include<stdio.h>
int main(){
	//求100-200之间所有的素数。 
	int flag = 0;//0表示素数  1表示不是素数 
	for(int i=100;i<=200;i++){//101
		flag = 0;
		for(int j = 2;j<=i-1;j++){
			if(i%j==0){
				flag=1;
			} 
		}
		if(flag==0) printf("%5d",i);
	} 
	return 0;	 
} 

#include<stdio.h>
int main(){
	void fun(char *a,int *b);
	char *a = "asdfgFGHJK45678";
	int num = 0;
	fun(a,&num);
	printf("%d",num);
	return 0;	 }
void fun(char *a,int *b){
	int i = 0; int n=0;
	while(*(a+i)!='\0'){
		if(*(a+i)>='a'&&*(a+i)<='z') n++;
		i++;}
	*b = n;
}


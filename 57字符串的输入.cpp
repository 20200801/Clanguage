#include<stdio.h>
int main(){
	char str1[5],str2[5],str3[5];
	//str1
	scanf("%s%s%s",str1,str2,str3); 
	printf("str1=%s,str2=%s,str3=%s",str1,str2,str3);
	//输入方式1：she he she
	//输入方式2：she   he   she
	//输入方式3：she回车he回车she 
	return 0;
}


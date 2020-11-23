#include<stdio.h>
int main(){
	char ch = 'a';//97   A:65   =32
	//小写字符的ascii码和大写字符的ascii码相差32
	char ch2 = ch - 32;
	printf("ch2 = %c",ch2); 
	return 0;
} 

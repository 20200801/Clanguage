#include<stdio.h>
int main(){
	char ch = 'a';//会在内存中开辟1Byte。 
	//字符在计算机存储的时候，存储的都是字符的ASCII码
	printf("ch = %c\n",ch); 
	printf("ch ascii = %d\n",ch);
	//计算'1'-1的结果？ 48
	char ch2 = '1';
	int a = 1;
	printf("%d\n",(ch2-a));
	return 0;
} 

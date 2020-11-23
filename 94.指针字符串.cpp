#include<stdio.h>
int main(){
	char str1[] = "helloworld"; 
	//str1表示元素h的地址 \0结尾 
	printf("%s\n",str1); 
	//指针字符串 
	char *str2 = "I love you!"; 
	//str2表示字符串第一个元素I的地址，
	//也就是说，指针str2指向元素I，字符串以\0结尾. 
	printf("%s\n",str2);
	printf("%c\n",*str2);
	printf("%c\n",*(str2+3));
	char s[20] = "beijing";
	char *p;
	p = s+1;
	printf("%c\n",p[0]);
	printf("%c\n",*p);
	printf("%c\n",*(s+1));
	printf("%c\n",s[1]);
	return 0;	 
}


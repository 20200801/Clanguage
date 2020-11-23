#include<stdio.h>
#include<string.h> 
int main(){
//	char s[20]="dasdsad";
//	char s1[20]={"dasdsad"};
//	char *s2;
//	s2 = {"sdasadsa"};
//	char *s3;
//	s3 = "sdasadsa";
//	char *s4= "sdasadsa";
//	char *s5= {"sdasadsa"}; 
	char *s = "abcde";
	s+=2;//s =s+2;
	printf("%d\n",s);
	char str[] ="hello!";
	printf("%d\n",strlen(str));
	printf("%d\n",sizeof(str));
	return 0;	 
}


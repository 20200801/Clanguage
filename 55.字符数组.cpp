#include<stdio.h>
int main(){
	//1.字符数组 
	char a[10] = {'I',' ','l','o','v','e'}; 
	for(int i=0;i<=9;i++){
		printf("%c\n",a[i]); 
	} 
	//2.
	char b[]={"hello"};//字符串 
	//字符串b在内存中占了多少空间？6Byte
	//字符串b的有效字符数为？5 
	printf("%d\n",sizeof(b)); //
	for(int i=0;i<=5;i++){
		printf("%c",b[i]); 
	} 
	printf("\n",b);
	printf("%s\n",b);
	//3.
	char c[] = "hellohello"; 
	printf("%s",c);
	return 0;
}


#include<stdio.h>
#include<string.h>
int main(){//string---字符串 
	char str1[] ="I love china!";
	//1.输出字符串
	puts(str1); //同printf("%s",str1);
	//2.输入一个字符串
//	char str2[10];
//	gets(str2);
//	puts(str2);
	//3.字符串连接函数strcat(字符串1,字符串2);
	//功能：将字符串2，拼接到字符串1中。
	char str3[] = "hello"; 
	char str4[] = "world";
	strcat(str3,str4);//
	puts(str3);
	puts(str4);
	//4.字符串的复制strcpy(字符串1,字符串2)
	//功能：将字符串2复制到字符串1中。 
	char str5[10];
	char str6[]="hello";
	strcpy(str5,str6);
	puts(str5); 
	//str5=str6;
	//5.字符串比较函数strcmp(字符串1,字符串2)
	//两个字符串相等，返回0;
	//字符串1<字符串2,返回-1；
	//字符串1>字符串2,返回1； 
	//1.按照字典的顺序比较大小的，越往后越大
	//2.小写字母>大写字母  a>A
	//3.如果出现不同的字符串，以第一个不同的字符比较为准
	char str7[] ="helloa";
	char str8[]="hellob";
	printf("%d\n",strcmp(str7,str8)); 
	//6.检查字符串的实际长度strlen()
	char str9[] = "hello";//5 
	printf("%d\n",strlen(str9));//实际长度？ 
	printf("%d\n",sizeof(str9));//占多大空间？
	//7.将字符串转换为小写strlwr() lowercase
	char str10[] ="BBBB";
	strlwr(str10);
	puts(str10);
	//8.将字符串转换为大写 strupr() upercase
	strupr(str10);
	puts(str10);
	return 0;
}


#include<stdio.h>
int main(){
	//1.整型常量 -100 1000 0
	int a = 100; 
	printf("a=%d\n",a);
	//2.实型常量2.5  34.67
	float b = 12.3;//单精度浮点型
	printf("b=%f\n",b); 
	float c= 12.5e3;//12.5乘以10的3次方
	//e或E都可以
	printf("c=%f\n",c); 
	float d = 2.3e-2;//2.3乘以10的-2次方
	printf("d = %f\n",d);
	//3.字符常量
	char e = '?';
	printf("e = %c\n",e);
	//转义字符
	char f= '\n';//回车换行 
	printf("f = %c\n",f);
	printf("hel\thello\n");
	printf("\c");
	char g ='\110';//八进制对应的字符   65
	printf("g = %c\n",g);
	char h='\x41'; //十六进制对应的字符
	printf("h = %c\n",h);
	//4.字符串常量 
	char i[] = "abcd";
	printf("i=%s\n",i);
	//'a'   "a" 
	return 0;
} 

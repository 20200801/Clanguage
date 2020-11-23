#include<stdio.h>
int main(){//RGB 
	int max(int,int);
	int add(int,int);
	int (*p)(int,int);//可以指向一个函数的指针。
	//返回值为int类型，并且有 2个参数，并且每个参数的
	//类型为int的函数 
	p = max; //函数的名称表示，函数的地址 
	int z = (*p)(7,8); 
	printf("%d\n",z);
	p = add;
	z = (*p)(7,8);
	printf("%d\n",z);
	return 0;	 
}
int max(int x,int y){
//	if(x>y)return x;
//	else return y;
	int z = (x>y)? x:y;
	return z; 
} 
int add(int x,int y){
	return (x+y);
}

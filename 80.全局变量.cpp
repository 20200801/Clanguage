#include<stdio.h>
int P = 1,Q =10; 
void fun1(){
	int P=100,Q=100;
	printf("P=%d,Q=%d\n",P,Q);
}
int A= 4,B =10;
void fun2(){
	printf("A=%d,B=%d\n",A,B);
}
int main(){
	fun1();
	fun2();
	printf("P=%d,Q=%d\n",P,Q);
	return 0;	 
}



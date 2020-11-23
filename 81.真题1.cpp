#include<stdio.h>
#include<math.h>
int main(){
	double Fun2(double error);
	double s = Fun2(1e-6);
	printf("%.16f",s);
	return 0;	 
}
double Fun2(double error){//Fun2(1e-6)
	int sign = 1;//分子
	double n = 1.0;//分母 
	double term = 1.0;// 分子/分母 
	double pi = 0;
	while(fabs(term)>=error) {
		pi = pi +term;
		sign = -sign;
		n = n +2;
		term = sign/n;
	}
	pi = 4*pi;
	return pi;
} 


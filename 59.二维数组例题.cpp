#include<stdio.h>
int main(){
	//1.定义二维数组
	int a[4][4] = {{23,44,12,77},{13,2,33,12}
	,{23,45,12,65},{11,9,15,78}}; 
	//2.定义需要的变量
	int sum = 0;
	//3.算法---- 遍历 
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			if(a[i][j]>max) {
			max = a[i][j];
			x = i;
			y = j;
			} 
		}
	} 
	printf("max=%d,i=%d,j=%d",max,x,y);
	return 0;
} 

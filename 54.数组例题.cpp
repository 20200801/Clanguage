#include<stdio.h>
int main(){
	int a[10]; 
	//1.输入10个数 
//	for(int i=0;i<=9;i++){//&a[0]
//		scanf("%d",&a[i]); 
//	} 
	for(int i=0;i<=9;i++){//a+1
		scanf("%d",a+i);
	}
	//2.求平均分
	float avg,sum = 0; 
	for(int i=0;i<=9;i++){
		sum = sum +a[i];
	}
	avg = sum/10;
	//3.统计比平均分少的个数
	int j = 0; 
	for(int i=0;i<=9;i++){
		if(avg>a[i]) j++;
	}
	printf("%d,%f",j,avg);
	return 0;
}


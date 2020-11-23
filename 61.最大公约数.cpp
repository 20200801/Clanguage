#include<stdio.h>
int main(){ 
	printf("请输入两个值\n");
	int m;
	int n;
	scanf("%d%d",&m,&n);
	//1.找m和n最小的那个数
	int temp;//保存最小的那个数
	if(m>n) temp =n;
	else temp =m;
	//2.从最小值开始除，直到m和n第一次被同时整除，跳出循环
	int i;
	for(i = temp;i>0;i--){
		if(m%i==0&&n%i==0){
		printf("最大公约数为：%d\n",i);	break;
		}
	} 
	int lcm;//
	lcm = m * n /i;
	printf("最小公倍数为：%d\n",lcm);
	return 0;
} 

#include<stdio.h>
int main(){
	struct Student {
	int num;//学号
	char name[20];//姓名
	char sex;//性别
	char addr[30];//地址 
	}stu_1={201001,"zhangsan",'F',"beijing"};
	printf("%d %s %c %s\n",
	stu_1.num,stu_1.name,stu_1.sex,stu_1.addr);
	return 0;	 
}


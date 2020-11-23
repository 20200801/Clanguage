#include<stdio.h>
#include<string.h>
struct Student {
	int num;//学号
	char name[20];//姓名
	char sex;//性别
	char addr[30];//地址 
};
int main(){
	//int i;
	struct Student stu_1;
	stu_1.num = 200101;
	//strcpy()
	strcpy(stu_1.name,"zhangsan");
	stu_1.sex = 'F';
	strcpy(stu_1.addr,"taiyuan");
	printf("%d %s %c %s\n",
	stu_1.num,stu_1.name,stu_1.sex,stu_1.addr);
	struct Student stu_2;
	stu_2.num = 200102;
	//strcpy()
	strcpy(stu_2.name,"lisi");
	stu_2.sex = 'M';
	strcpy(stu_2.addr,"beijing");
	printf("%d %s %c %s",
	stu_2.num,stu_2.name,stu_2.sex,stu_2.addr);
	return 0;	 
}


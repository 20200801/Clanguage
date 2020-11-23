#include<stdio.h>
int main(){
	char a[] = "helloworld!";//\0
	printf("%s\n",a);
	a[5] = '\0';
	printf("%s",a);
//	for(int i=0;a[i]!='\0';i++){
//		printf("%c",a[i]);
//	}
	return 0;
}


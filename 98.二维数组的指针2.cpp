#include<stdio.h>
int main(){//RGB 
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{4,3,2,1}};
	int *p;//指向一个元素 
	p = &a[0][0];// p = a[0];p = *a
	for(;p<a[0]+12;p++){//p = p+1
		if((p-a[0])%4==0) printf("\n");
		printf("%d\t",*p);
	}
	return 0;	 
}



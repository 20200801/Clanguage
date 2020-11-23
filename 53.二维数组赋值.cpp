#include<stdio.h>
int main(){
	//1.
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,0,1,2}}; 
	printf("%d\n",a[2][1]);
	for(int i=0;i<=2;i++){//行 
		for(int j=0;j<=3;j++){//列 
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//2.
	int b[3][4] = {1,2,3,4,5,6,7,8,9,0,1,2};
	for(int i=0;i<=2;i++){//行 
		for(int j=0;j<=3;j++){//列 
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	//3.
	int c[3][4]={{1,2},{2},{4}}; 
	for(int i=0;i<=2;i++){//行 
		for(int j=0;j<=3;j++){//列 
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	//4.
	int d[3][4]={0};
	for(int i=0;i<=2;i++){//行 
		for(int j=0;j<=3;j++){//列 
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
	//5.
	int e[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	//int e[3][]={1,2,3,4,5,6,7,8,9,10,11,12};错误！
	//int e[][]={1,2,3,4,5,6,7,8,9,10,11,12};错误！ 
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
			printf("%5d",e[i][j]);
		}
		printf("\n");
	}
	 
	return 0;
}


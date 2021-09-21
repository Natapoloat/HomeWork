#include<stdio.h>
int main(){
	int num[10];
	for(int i=0;i<=9;i++){
		printf("Enter num:");
		scanf("%d",&num[i]);
	}
	printf("Data in array:");
	for(int p=0;p<=9;p++){
		printf(" %d",num[p]);
	}
	printf("\nResult:");
	for(int u=0;u<=9;u++){
		if(num[u-1]%2!=0&&num[u+1]%2!=0){
			printf(" %d",num[u]);
		}
	}
}

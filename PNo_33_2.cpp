#include<stdio.h>
void check(int,int,int);
int main(){
	int num[10];
	int c = 0;
	while(c <= 9){
		printf("Enter num:");
		scanf("%d",&num[c]);
		c++;
	}
	printf("Data in array:");
	c = 0;
	while(c <= 9){
		printf(" %d",num[c]);
		c++;
	}
	printf("\nResult:");
	c = 1;
	while(c<9){
		check(num[c-1],num[c],num[c+1]);
		c++;
	}
	
	return 0;
}
void check(int l,int m,int r){
	if(l%2 != 0&&r%2!= 0){
		printf(" %d",m);
	}
}

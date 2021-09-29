#include<stdio.h>
#include   <math.h>
int main(){
	float num[10],xbar=0,sum=0,ex=0;
	int i;
	for(i = 0;i<10;i++){
		printf("Enter num: ");
		scanf("%f",&num[i]);
		xbar += num[i];
	}
	xbar /= 10;
	//printf("%f",xbar);
	for(i = 0;i<10;i++){
		ex = (num[i]-xbar);
		ex *= ex;
		sum += ex;
	}//printf("%f",ex);
	sum /= 9;
	sum = sqrt(sum);
	printf("standard deviation : %.2f",sum);
	
	return 0;
}

#include<stdio.h>
int main(){
	float h[10] ;
	float sum = 0;
	for(int i=0;i<10;i++){
		printf("Enter height :");
		scanf("%f",&h[i]);
		sum += h[i];
	}
	printf("********\n%.2f",sum/10);
	return 0;
}

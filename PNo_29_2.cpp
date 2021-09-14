#include<stdio.h>
float hasum(float);
int main(){
	float h[10] ;
	float sum = 0;
	for(int i=0;i<10;i++){
		printf("Enter height :");
		scanf("%f",&h[i]);
		sum += h[i];
	}
	printf("********\n%.2f",hasum(sum));
	return 0;
}
float hasum(float a){
	a = a/10;
	return a;
}

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
	int p=1;
	while(p<=10){
		printf("%d. %.2f\n",p,h[p-1]);
		p++;
	}
	printf("average = %.2f",hasum(sum));
	return 0;
}
float hasum(float a){
	a = a/10;
	return a;
}


#include<stdio.h>
int main(){
	float h[10] ;
	float sum = 0;
	for(int i=0;i<10;i++){
		printf("Enter height :");
		scanf("%f",&h[i]);
		sum += h[i];
	}
	for(int p=1;p<=10;p++){
		printf("%d. %.2f\n",p,h[p-1]);
	}
	printf("average = %.2f",sum/10);
	return 0;
}

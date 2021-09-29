#include<stdio.h>
#include<math.h>
int main(){
	float num,sum1=0,sum2=0,summer=0;
	int i;
	for(i = 0;i<10;i++){
		printf("Enter num: ");
		scanf("%f",&num);
		sum1 += pow(num,2);
		sum2 += num;
	}
	//printf("\n%.2f%.2f",sum1,sum2);
	sum1 *= 10;
	sum2 = pow(sum2,2);
	//printf("\n%.2f%.2f",sum1,sum2);
	summer = sum1 - sum2;
	summer /= 90;
	//printf("\n%.2f%.2f",sum1,sum2);
	summer = sqrt(summer);
	//printf("\n%.2f%.2f",sum1,sum2);
	printf("standard deviation : %.2f",summer);
	return 0;
}

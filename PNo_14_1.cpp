#include<stdio.h>
int main(){
	int n;
	while(n != -99){
		printf("Input number: ");
		scanf("%d",&n);
		int i;
		for(i = 2;i<=n&&n%i!=0;i++){
		}
		if(i==n){
			printf("Prime Number\n");
		}
		else if(n==-99){
			break;
		}
		else{
			printf("Not Prime Number\n");
		}
	}
	
	return 0;
}

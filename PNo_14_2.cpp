#include<stdio.h>
int main(){
	int n;
	do{
		printf("Enter number : ");
		scanf("%d",&n);
		if(n==-99){
			break;
		}
		int x=2;
		while(x<=n&&n%x!=0){
			x = x+1;
		}
		if(x==n){
			printf("Prime Number\n");
		}
		else{
			printf("Not Prime Number\n");
		}
		
	}while(n != -99);
	
	return 0;
}

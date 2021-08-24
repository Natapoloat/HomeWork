#include<stdio.h>
int main(){
	int n,m=2;
	printf("Enter number:");
	scanf("%d",&n);
	while(n != 1){
		while(n%m == 0){
			if(n/m == 1){
				printf("%d",m);
			}
			else{
				printf("%d x ",m);
				
			}
			n = n/m;	
		}
		
		m = m+1;
	}
	
	
	
	return 0;
}

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int l=1;l<=n;l++){
			int x=l+i;
			if(x%2 == 0){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");	
	}
	
	return 0;
}

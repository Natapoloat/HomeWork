#include<stdio.h>
int main(){
	int n,y;
	scanf("%d",&n);
	y = n+1;
	y = y/2;
	for(int i=1;i<=n;i++){
		for(int x=1;x<=y;x++){
			if(i%2 != 0){
				printf("* ");
			}
			else{
				printf(" *");
			}
		}
		printf("\n");
		
	}
		
	return 0;
}

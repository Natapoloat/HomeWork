#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	for(int i=num/2;i>0;i--){
		printf("=======\n");
	}
	if(num%2 != 0){
		printf("_______");
	}
	
	return 0;
}

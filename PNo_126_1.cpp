#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	while(num != 0){
		if(num > 1){
			printf("=======\n");
			num -= 2;
		}else{
			printf("_______");
			num -= 1;
		}
	}
	
	return 0;
}

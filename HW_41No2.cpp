#include<stdio.h>
void find();
int i=0;
int main(){
	find();
	return 0;
}
void find(){
	int a[2];
	while(i<2){
		scanf("%d",&a[i]);
		i++;
	}
	if(a[i-2]>a[i-1]){
		printf("%d",a[i-2]);
	}
	else{
		printf("%d",a[i-1]);
	}
}

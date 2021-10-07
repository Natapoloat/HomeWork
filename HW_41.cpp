#include<stdio.h>
int find(int,int);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",find(a,b));
	return 0;
}
int find(int a,int b){
	if(a > b){
		return a;
	}
	if(b > a){
		return b;
	}
}

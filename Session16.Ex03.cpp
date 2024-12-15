#include<stdio.h>
int tong(int *a,int *b);

int main(){
	int x=100,y=20,sum;
	sum= tong(&x,&y);
	printf("tong 2 so la:%d",sum);
	return 0;
	
}
int tong(int *a,int *b){
return *a+*b;}

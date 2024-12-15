#include<stdio.h>

int main(){
	int a=5;
	int *ptr=&a;
	//cach1	
	printf("%d",*ptr);
	printf("\n%d",ptr);
	//cach 2
	printf("\n%d",a);
	printf("\n%d",&a);	
	return 0;


}

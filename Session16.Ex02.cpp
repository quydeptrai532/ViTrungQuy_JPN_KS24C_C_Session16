#include<stdio.h>

void contro(int *a,int *b);
int main(){
	int x=999,y=666;
	printf("Truoc khi hoan doi gia tri 2 so  la:%d va %d",x,y);
    contro(&x,&y);
    printf("\n Sau khi hoan doi gia tri 2 so la:%d va %d",x,y);
    return 0;}
void contro(int *a,int *b){
    int temp=*a;
        *a=*b;
        *b=temp;
}

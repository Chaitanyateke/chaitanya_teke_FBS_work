#include<stdio.h>

void main(){
	int a=18,b=30,temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
}

#include<stdio.h>

void main(){
	int a,b,c;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("%d is greater than %d and %d",a,b,c);
	}
	else if(b>c){
		printf("%d is greater than %d and %d",b,a,c);
	}
	else{
		printf("%d is greater than %d and %d",c,a,b);
	}
}

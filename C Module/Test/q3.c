//print last 2 digit of number (eg. i/p: 223310 , o/p: 10)

#include<stdio.h>

void main(){
	int n,ltd;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	ltd=n%100;
	
	printf("Last two digits = %d",ltd);
}

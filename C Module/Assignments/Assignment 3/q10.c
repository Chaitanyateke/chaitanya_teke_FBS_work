//Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)

#include<stdio.h>

void main(){
	int n,ld;
	printf("Enter number: ");
	scanf("%d",&n);
	ld=n%10;
	
	while(n>10){
		n=n/10;
	}
	printf("Sum of 1st and last digit = %d",ld+n);
}

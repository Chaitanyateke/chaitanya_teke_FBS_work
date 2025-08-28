//Find factorial of given number.
//Input: n = 5
//Output: 120

#include<stdio.h>

void main(){
	int i=1,fact=1,n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("factorial of %d = %d",n,fact);
}

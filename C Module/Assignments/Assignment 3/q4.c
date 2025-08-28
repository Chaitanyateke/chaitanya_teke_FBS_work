//Check the given number is prime or not.
//Input: n = 7
//Output: Prime

#include<stdio.h>

void main(){
	int i=2,n,flag=0;
	printf("Enter number: ");
	scanf("%d",&n);
	while(i<=n/2){
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0){
		printf("%d is prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}
}

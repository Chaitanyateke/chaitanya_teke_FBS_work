//Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome

#include<stdio.h>

void main(){
	int n,p,temp,r;
	printf("Enter number: ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0){
		p=n%10;
		r=r*10+p;
		n=n/10;
	}
	if(temp==r){
		printf("%d is palindrome",temp);
	}
	else{
		printf("%d is not a palindrome",temp);
	}
}

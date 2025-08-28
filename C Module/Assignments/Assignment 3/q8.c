//Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong

#include<stdio.h>

void main(){
	int n,temp,rem,sum=0,fact;
	printf("Enter number: ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0){
		rem=n%10;
		fact=1;
		while(rem>1){
			fact=fact*rem--;
		}
		sum=sum+fact;
		n=n/10;
	}
	
	if(temp==sum){
		printf("%d is strong number",temp);
	}
	else{
		printf("%d is not a strong number",temp);
	}
}

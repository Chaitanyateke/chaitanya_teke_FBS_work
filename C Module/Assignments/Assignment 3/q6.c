//Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect

#include<stdio.h>

void main(){
	int n,i=1,sum=0,temp;
	printf("Enter number: ");
	scanf("%d",&n);
	temp = n;
	
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==temp){
		printf("%d is prefect number",temp);
	}
	else{
		printf("%d is not perfect number",temp);
	}
}

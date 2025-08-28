//Print table for given number
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50

#include<stdio.h>

void main(){
	int n,i=1,k;
	printf("Enter number: ");
	scanf("%d",&n);
	
	while(i<=10){
		k=n*i;
		printf("%d ",k);
		i++;
	}
}

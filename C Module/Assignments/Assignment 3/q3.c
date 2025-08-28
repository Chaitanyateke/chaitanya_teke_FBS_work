//Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15

#include<stdio.h>

void main(){
	int start,end,sum=0;
	printf("Enter Starting: ");
	scanf("%d",&start);
	printf("Enter End: ");
	scanf("%d",&end);
	
	while(start<=end){
		sum+=start;
		start++;
	}
	printf("%d",sum);
}

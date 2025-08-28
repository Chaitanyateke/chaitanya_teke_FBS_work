//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong

#include<stdio.h>

void main(){
	int n,ar=0,r,temp,temp1,res=1,count=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
	temp1=n;
	
//	while(temp>0){
//		count++;
//		temp=temp/10;
//	}
//	while(count>0){
//		res=res*res;
//		count--;
//	}
	
	while(n>0){
		r=n%10;
		ar=ar+r*r*r;
		n=n/10;
	}
	if(temp==ar){
		printf("%d is armstrong number",temp);
	}
	else{
		printf("%d is not armstrong number",temp);
	}
}

#include<stdio.h>

void main(){
	int s1,s2,s3;
	printf("Enter side1 of triangle: ");
	scanf("%d",&s1);
	printf("Enter side2 of triangle: ");
	scanf("%d",&s2);
	printf("Enter side3 of triangle: ");
	scanf("%d",&s3);
	
	if(s1==s2 && s2==s3){
		printf("Triangle is Equivalent");
	}
	else if(s1==s2 || s2==s3 || s1==s3){
		printf("Triangle is Isosceles");
	}
	else{
		printf("Triangle is Scalene");
	}
}

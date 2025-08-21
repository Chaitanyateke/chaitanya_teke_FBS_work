#include<stdio.h>

void main(){
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	
	if(age<12){
		printf("You are Child");
	}
	else if(age>=12 && age<=19){
		printf("You are Teenager");
	}
	else if(age>=20 && age<=59){
		printf("You are Adult");
	}
	else{
		printf("You are Senior");
	}
}

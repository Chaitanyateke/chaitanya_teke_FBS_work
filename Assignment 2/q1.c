#include<stdio.h>

void main(){
	int n1,n2,res;
	char op;
	printf("Enter n1: ");
	scanf("%d",&n1);
	printf("Enter n2: ");
	scanf("%d",&n2);
	printf("Select operator(+,-,/,*,%): ");
	scanf(" %c",&op);
	
	if(op == '+'){
		res=n1+n2;
		printf("%d + %d = %d",n1,n2,res);
	}
	else if(op == '-'){
		res=n1-n2;
		printf("%d - %d = %d",n1,n2,res);
	}
	else if(op == '*'){
		res=n1*n2;
		printf("%d * %d = %d",n1,n2,res);
	}
	else if(op == '/'){
		res=n1/n2;
		printf("%d / %d = %d",n1,n2,res);
	}
	else if(op == '%'){
		res=n1%n2;
		printf("%d % %d = %d",n1,n2,res);
	}
	else{
		printf("Operator selected is not in list. Please selcet correct operator....");
	}
}

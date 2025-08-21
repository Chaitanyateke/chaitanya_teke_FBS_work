#include<stdio.h>

void main(){
	int price;
	double dis,tprice;
	char ans;
	printf("Enter Price: ");
	scanf("%d",&price);
	printf("Answer in Yes('y') or No('n')..\n");
	printf("Are you a student: ");
	scanf(" %c",&ans);

	if(ans == 'y'){
		if(price>500){
			dis=price*0.20;
			tprice=price-dis;
			printf("Final price = %lf",tprice);
		}
		else{
			dis=price*0.10;
			tprice=price-dis;
			printf("Final price = %lf",tprice);
		}
	}
	else{
		if(price>600){
			dis=price*0.15;
			tprice=price-dis;
			printf("Final price = %lf",tprice);
		}
		else{
			printf("Final price = %d \nNo discount......",price);
		}
	}
}

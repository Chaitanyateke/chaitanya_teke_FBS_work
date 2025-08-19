#include<stdio.h>

void main(){
	double salary=6000, hra,da,ta;
	
	if(salary<=5000){
		da=salary*0.10;
		ta=salary*0.15;
		hra=salary*0.25;
		printf("da = %.2lf, ta = %.2lf, hra = %.2lf",da,ta,hra);
	}
	else{
		da=salary*0.15;
		ta=salary*0.25;
		hra=salary*0.30;
		printf("da = %.2lf, ta = %.2lf, hra = %.2lf",da,ta,hra);
	}
}

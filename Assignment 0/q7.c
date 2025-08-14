#include<stdio.h>

void main(){
	int min=357, hr, rmin;
	hr = min/60;
	rmin = min%60;
	printf("%d minutes = %d hr %d min", min, hr,rmin);
}

//Convert the time entered in hour, minute and second into total seconds....

#include<stdio.h>

void main(){
	int hr,min,sec;
	printf("Enter time in (hr:min:sec): ");
	scanf("%d : %d : %d",&hr,&min,&sec);
	int tsec= hr*3600 + min*60 + sec;
	
	printf("Total seconds: %d",tsec);
}

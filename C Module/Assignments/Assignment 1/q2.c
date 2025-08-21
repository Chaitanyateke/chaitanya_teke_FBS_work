#include<stdio.h>

void main(){
	int n=757;
	int q,r1,r2,r3,res;
	r1=n%10;
	q=n/10;
	r2=q%10;
	r3=q/10;
	res=r1*100+r2*10+r3;
	
	if(n==res){
		printf("%d is palindrome",n);
	}
	else{
		printf("%d is not palindrome of %d",res,n);
	}
}

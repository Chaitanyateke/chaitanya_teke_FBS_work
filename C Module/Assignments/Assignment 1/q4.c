#include<stdio.h>

void main(){
	char a='E';
	
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
		printf("%c is vowel",a);
	}
	else{
		printf("%c is a consonant",a);
	}
}

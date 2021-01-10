#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void){
     
	 char c;
	 printf("a) Good Morning\nb)Good Evening\nc)Exit Program\n");
	 c=getch();
	 if(c=='a'){
		 system ("CLS");
		 printf("Good Morning");
	 }
	 else if(c=='b'){
		 system ("CLS");
		 printf("Good Evening");
	 }
	 else if(c=='c'){
		 system ("CLS");
		 printf("Exit Program");
	 }
	 else{
		 system ("CLS");
		 printf("Wrong Choice");
	 }
	 c=getch();
	 return 0;
}
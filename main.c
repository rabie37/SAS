#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b ; 
	 long result; 
	 char operation;
	printf("la valeur de a\n");
	scanf("%d",&a);
	printf("la valeur de b\n");
	scanf("%d" ,&b);
	// traitement
	result = a+b ;
	printf("la somme est %ld :\n",result);
	result = a-b ;
	printf("la soustraction est %ld :\n",result);
	result = a/b ;
	printf("la division est %ld :\n",result);
	result = a*b ;
	printf("la multiplication est %ld :\n",result);
	result = a%b ;
	printf("le modulo est %ld :\n",result);
	// 
	 
     if ( operation== '+')	result= a+b ;
	 if ( operation =='-')	result= a-b ;
	 if (operation =='/')	result= a/b ;
	 if (operation =='%')   result= a%b ;
	 if (operation =='*')   result= a*b ;
	 
	 
	 printf("the result is : %.2f",result );
	
	
	return 0;
}

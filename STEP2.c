#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int  a , b ;
 		printf("entre un nombre :");
 		
 		scanf("%d" , &a);
 		
 		printf("entre un nombre : ");
 		
 		scanf("%d" , &b);
 		
 		printf("le max est %d",max(a,b));
 		
 		//max(a,b);
 		return 0;
	 }
	

        int max (int a,int b){
        	if(a<b){
        printf("%d est superieur de %d",a,b);
			
		return b;		
		 }
		 else 
		 {
		 	printf("%d est inferieur de %d \n",b,a);
		 	
		 	return a;
		 }
        	
		}

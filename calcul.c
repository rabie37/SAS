#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int a , b ;
    float sum ;
    char operation;
        printf("entre l'operation :");
    scanf("%c", &operation);
    printf("entre THE first number :");
    scanf("%d" , &a);
    printf("entre THE second number :");
    scanf("%d" , &b);


     switch(operation){
         case '+':
         sum= a+b ;
         printf("the sum is : %f" , sum );
         break ;
         case '-':
         sum= a-b ;
         printf("the sum is : %f" , sum );
         break ;
         case '*':
         sum= a*b ;
         printf("the sum is : %f" , sum );
         break ;
         case '/':
         sum= a/b ;
         printf("the sum is : %f" , sum );
         break ;
         case '%':
         sum= a%b ;
         printf("the sum is : %f" , sum );
         break ;

          return 0;

}
}



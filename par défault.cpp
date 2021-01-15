#include<stdio.h>
#include<stdlib.h>
  int main(){
  	//déclaration
  	
  	float r, D, p,s;
  	const float pi=3.14;
  	
  	//Entré
  	
  	printf("Entre la valeur du rayon r /n" );
  	scanf("%f" ,&r);
  	if(r!=0){
	  
  	//traitemant
  	
  	p =2* pi*r;
  	D =p/pi ;
  	s =pi*r*r;
  	
  	//AFFICHAGE
  	printf("%f",p);
  	//
	  
	printf("un cercle de rayon %.2f\n a pour diametre %.2f\n pour perimetre %.2f\n et pour surface %.2f\n",r,p,D,s);
  }
   else 
  {
  
  	printf("Error");
}
  return 0 ;
}

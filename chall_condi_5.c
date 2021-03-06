#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() 
{ 
  				/* calculer les solutions possible d?une ?quation 2?me degr? */
  				
/************************************************************************************************
  			Soit f une fonction polyn?me de degr? 2 de la forme :
			f(x)=ax?+bx+c o? a , b et c sont trois entiers avec a # 0.
			Le nombre r?el D ?gal ? b?-4ac est appel? le discriminant de f.
			
************************************************************************************************/

  
 int A, B, C;
 float D; 	/* Delta */
 
 printf("Calcul des solutions d\'une equation du 2eme degre de la forme  f(x)= ax^2 + bx + c = 0 \n \n"); 
 printf("Entrer la valeurs pour a, b, et c : \n");
 scanf("%d %d %d", &A, &B, &C);

 								/* Calcul du discriminant b^2-4ac */
 D = pow(B,2) - 4.0*A*C;

 										/* Distinction de tout	les cas*/
 										
  if (A==0 && B==0 && C==0) 		/*0x+0+0=0*/
  
    printf("0 toujour est une solution de cette equation.\n"); 
    
  else if (A==0 && B==0) 			 /* Contradiction: c # 0 et c = 0 */ 
    
    printf("Cette equation ne possede pas de solutions dans les nobre relles mais dans les nombres complexes il y a une  .\n"); 
    
  else if (A==0) /* bx + c = 0 */  
     { 
       printf("La solution de cette equation du premier degre est :\n");  
       printf(" x = %.2f\n", (float)-C/B);
     } 
  else if (D<0)  /* b^2-4ac < 0   alors l'?quation f(x)=0 n'admet aucune solution r?elle.
										f ne peut pas s'?crire sous forme factoris?e.*/

 {
printf("Les solutions de cette equation sont les suivantes :\n"); 
 
 } 
  else if (D==0) /* b^2-4ac = 0   alors l'?quation f(x)=0 admet une unique solution:x0=-b/2a.
										La forme factoris?e de f est f(x)=a(x-x0)?  */
     { 
       printf("Cette equation a une seule solution  :\n"); 
       printf(" x =  %.2f\n", (float)-B/(2*A)); 
     } 
  else /* b^2-4ac > 0  alors l'?quation f(x)=0 a deux solutions:
   									x1=-b-squrt(D)/2a et x2=-b+sqrt(D)/2a.
							  		 La forme factoris?e de f est f(x)=a(x-x1)(x-x2).*/
     {  
       printf("Les solutions de cette equation sont :\n"); 
       printf(" x1 = %g\n", (float)(-B+sqrt(D))/(2*A)); 
       printf(" x2 = %g\n", (float)(-B-sqrt(D))/(2*A)); 
       printf(" f(x) = %d(x-%g)(x-%g)\n", A,(float)(-B+sqrt(D))/(2*A),(float)(-B-sqrt(D))/(2*A));
     } 
   return 0; 
}

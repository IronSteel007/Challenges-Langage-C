#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() 
{ 
  				/* calculer les solutions possible d’une équation 2ème degré */
  				
/************************************************************************************************
  			Soit f une fonction polynôme de degré 2 de la forme :
			f(x)=ax²+bx+c où a , b et c sont trois réels avec a # 0.
			Le nombre réel D égal à b²-4ac est appelé le discriminant de f.
			
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
    
    printf("Cette equation ne possede pas de solutions.\n"); 
    
  else if (A==0) /* bx + c = 0 */  
     { 
       printf("La solution de cette equation du premier degre est :\n");  
       printf(" x = %.2f\n", (float)-C/B);
     } 
  else if (D<0)  /* b^2-4ac < 0   alors l'équation f(x)=0 n'admet aucune solution réelle.
										f ne peut pas s'écrire sous forme factorisée.*/

 {
printf("Les solutions complexes de cette equation sont les suivantes :\n"); 
 
 } 
  else if (D==0) /* b^2-4ac = 0   alors l'équation f(x)=0 admet une unique solution:x0=-b/2a.
										La forme factorisée de f est f(x)=a(x-x0)²  */
     { 
       printf("Cette equation a une seule solution  :\n"); 
       printf(" x =  %.2f\n", (float)-B/(2*A)); 
     } 
  else /* b^2-4ac > 0  alors l'équation f(x)=0 a deux solutions:
   									x1=-b-squrt(D)/2a et x2=-b+sqrt(D)/2a.
							  		 La forme factorisée de f est f(x)=a(x-x1)(x-x2).*/
     {  
       printf("Les solutions reelles de cette equation sont :\n"); 
       printf(" x1 = %g\n", (float)(-B+sqrt(D))/(2*A)); 
       printf(" x2 = %g\n", (float)(-B-sqrt(D))/(2*A)); 
     } 
   return 0; 
}

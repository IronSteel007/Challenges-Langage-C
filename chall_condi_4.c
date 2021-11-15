#include<stdio.h>
#include<stdlib.h>

int main() 
{ 
 int Valeurs1, Valeurs2,Somme;
 
 printf("entrer la valeur1 et la valeur2\n");
 scanf("%d %d" , &Valeurs1, &Valeurs2);
 Somme=Valeurs1+Valeurs2;
 if(Valeurs1==Valeurs2) {
 	printf("La Somme = %d",Somme*3);
}
 else {
 	printf("La Somme = %d",Somme);
 }
   return 0; 
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() 
{ 
 unsigned long Annee,choix ;
 
  
 printf("Entrer une Annee  : ");
 scanf("%ld", &Annee);


	printf("Entrer votre choix : \n");
	printf("1. Mois \n");
	printf("2. Jours \n");
	printf("3. Heures \n");
	printf("4. Minutes \n");
	printf("5. Secondes \n");
	scanf("%ld", &choix);

	if (Annee <= 0 ) {
		printf("Impossible");
	}


  else if (Annee % 4 == 0 ) {	
  
		  switch (choix) {
				case 1 :
					Annee = 12;
					printf("%ld Mois ", Annee) ;
					break;
				case 2 : 
					Annee = 12 * 30 + 6;
					printf("%ld Jours ",Annee ) ;
					break;
				case 3 : 
					Annee = 24*(12 * 30 + 6) ;
					printf("%ld Heures ", Annee) ;
					break;
				case 4 :
					Annee = 60*(24*(12 * 30 + 6)) ;
					printf("%ld Minutes ", Annee) ;
					break;
				case 5 :
					Annee = 60*(60*(24*(12 * 30 + 6))) ;
					printf("%ld Secondes ", Annee);
					break;
			}


}
	
	 
  else
		    switch (choix) {
						case 1 :
					Annee = 12;
					printf("%ld Mois ", Annee) ;
					break;
				case 2 : 
					Annee = 12 * 30 + 5;
					printf("%ld Jours ",Annee ) ;
					break;
				case 3 : 
					Annee = 24*(12 * 30 + 5) ;
					printf("%ld Heures ", Annee) ;
					break;
				case 4 :
					Annee = 60*(24*(12 * 30 + 5)) ;
					printf("%ld Minutes ", Annee) ;
					break;
				case 5 :
					Annee = 60*(60*(24*(12 * 30 + 5))) ;
					printf("%ld Secondes ", Annee);
					break;
					}
   return 0; 
}

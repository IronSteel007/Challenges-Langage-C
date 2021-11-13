#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
	
	float rayon;
	
	printf("ce programme calcule le Circonference d\'un cercle : \n");
	printf("Entrer le valeur de rayon : ");
	scanf("%f", &rayon);
	
	printf("Circonference du cercle avec le rayon : %f = %f", rayon, (float) 2 * M_PI * rayon);
	
	return 0;
}

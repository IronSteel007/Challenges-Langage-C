#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
 {
	
	int Ax, Ay, Bx, By;
	float AB;
	
	printf("ce programme calcule la distance entre deux poits A et B : \n \n");
	
	printf("Entrer la valeur de Ax : ");
	scanf("%d", &Ax);
	printf("Entrer la valeur de Ay : ");
	scanf("%d", &Ay);
	
	printf("Entrer la valeur de Bx : ");
	scanf("%d", &Bx);
	printf("Entrer la valeur de By : ");
	scanf("%d", &By);
	
	AB = sqrt( pow((Bx-Ax), 2) + pow((By-Ay), 2));
	printf("la distance est : %g", AB);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main()
 {
	int a, b;
	
	printf("ce programme Calcule et affichage r�sultat en format d�cimal : \n \n \n");
	
	printf("Entrer la valeur de a : ");
	scanf("%d", &a);
	printf("Entrer la valeur de b : ");
	scanf("%d", &b);
	
	printf("%d + %d = %d \n", a, b, a + b);
	printf("%d - %d = %d \n", a, b, a - b);
	printf("%d x %d = %d \n", a, b, a * b);
	printf("%d / %d = %g \n", a, b, (float) a / b);
	printf("%d Mod %d = %d \n", a, b, a % b);
	
	return 0;
}

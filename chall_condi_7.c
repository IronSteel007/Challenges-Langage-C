#include <stdio.h>
#include <stdlib.h>

int main() {
	
	long nombre;
	
	printf("enter un nombre : \n");
	scanf("%ld",&nombre );
	
	
	if (nombre < 0)
	{
			printf("le nombre %ld est negatif . \n",&nombre);
	}

	else if (nombre > 0 )
	{
			printf("le nombre %ld est positif . \n",&nombre);
	}

	else
	 {
			printf("le nombre est egal a zero . \n");
	}
	return 0;
}

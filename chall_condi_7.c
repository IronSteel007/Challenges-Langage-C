#include <stdio.h>
#include <stdlib.h>

int main() {
	
	long nombre;
	
	printf("enter un nombre : \n");
	scanf("%ld",&nombre );
	
	
	if (nombre < 0)
	{
			printf("le nombre est negatif . \n");
	}

	else if (nombre > 0 )
	{
			printf("le nombre est positif . \n");
	}

	else
	 {
			printf("le nombre est egal a zero . \n");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int nbr;
	printf("enter un entier : \n");
	scanf("%d",&nbr);
	
	if (nbr % 2 > 0){
			printf("le nombre est inpaire \n");
	}
	else {
			printf("le nombre est paire : \n");
	}
	return 0;
}

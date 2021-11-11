#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	printf ("ce programe transforme la distance du Mile en Metre   \n") ;
	float Mile , Km ;
    printf ("la distance en mile \n");
	scanf ("%.2f \n",&Mile);
	Km = Mile/1.609 ;
	printf("la distance en kilo Metre : %.2f \n", Km );
	
    
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
 {
		// Conversion du Metre au Km
 	float mile,km,metre;
 	printf("la distance en metre \n");
 	scanf ("%g",&metre);
 	km=metre/1000;
 	mile = km/1.609;
 	printf("%g metre = %g km = %g mile\n ",metre,km,mile);
 	
	
	return 0;
}

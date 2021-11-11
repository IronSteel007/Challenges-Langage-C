#include <stdio.h>
#include <stdlib.h>

int main()
 {
	// Conversion du km au Metre
 	float mile,km,metre;
 	printf("la distance en mile\n");
 	scanf ("%g",&mile);
 	km = mile*1.609;
 	metre=km*1000;
 	printf("%g mile=%g km = %g metre",mile,km,metre);
 	
	 
	return 0;
}

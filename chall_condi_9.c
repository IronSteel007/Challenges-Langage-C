#include <stdio.h>
main()
{
 int A, B;
 int MAX;
 printf("Introduisez Deux nombres entiers :");
 scanf("%i %i", &A, &B);
 if (A>B)
     MAX=A;
 else
     MAX=B;

 printf("La valeur maximale est %i\n", MAX);
  return 0;
}


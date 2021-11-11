#include <stdio.h>
#include<stdlib.h>
int main ()
{
	char name[10];
	char gender[10];
	int age ;
	int numero ;	
	printf("what is your name ? : ");
	scanf("%s", name);
	printf("are you Male or Female ?: ");
	scanf("%s",gender);
	printf("how old are you ? : ");
	scanf("%d",&age);
	printf("what is your phone number ?: ");
	scanf("%d",&numero);
	
	return 0;
}


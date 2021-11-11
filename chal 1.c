#include <stdio.h>
#include <stdlib.h>

int main() {
	
	/* Déclaration des variables */
	
	char firstname[40];
	char lastname[40];
	int age;
	char gender[10];
	char phoneNumber[15];
	
	printf("my first programme in language C :) \n");
	
	printf("Please enter the first name : \n ");
	scanf("%s", firstname);
	
	printf("Please enter the last name : ");
	scanf("%s", lastname);
	
	printf("Please enter your age : ");
	scanf("%d", &age);
	
	printf("Please enter your gender : ");
	scanf("%s", gender);
	
	printf("Please enter the phone number : ");
	scanf("%s", phoneNumber);
	
	//affichage des informations
	printf("Hi Mr %s %s your age is %d, your gender is : %s and your phone number is : %s", firstname, lastname, age, gender, phoneNumber);
	return 0;
}

int main()
{
//declarer des variable 
    float  metre,mile;

    printf("Entrez la longueur en metre: ");
    scanf("%f", &metre);

    //Convertir mètre en Mile
    
    mile =metre*1000*1.609;

    printf("Longueur en mile = %.2f m \n", mile);
    return 0;
}


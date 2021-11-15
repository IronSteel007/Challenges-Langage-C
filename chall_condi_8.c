#include <stdio.h>
int main()
{
    char c;
    printf("Donnez un caractere:\n");
    scanf("%c",&c);
    if(c >= 65 && c <= 90){
       printf("%c est une alphabet Majuscule.\n",c);}
    else if (c >= 97 && c <= 122){
       printf("%c est une alphabet Minuscule.\n",c);
    }else{
        printf("Attention vous n'avez saisi un alphapet");
    }
    return 0;
}





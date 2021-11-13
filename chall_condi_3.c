#include<stdio.h>
#include<stdlib.h>

main ()
{
       char lettre;
       
    
       printf ("Entrer une lettre SVP:\n");
       scanf  ("%c",&lettre);
        
        switch(lettre) 
        {
            case 'a': 
            printf ("la lettre est une Voyelle \n");
            break;
             case 'A': 
            printf ("la lettre est une Voyelle \n");
            break;
             case 'I': 
            printf ("la lettre est une Voyelle \n");
            break;
             case 'i': 
            printf ("la lettre est une Voyelle \n");
            break;
             case 'e': 
            printf ("la lettre est une Voyelle \n");
            break;
             case 'E': 
            printf ("la lettre est une Voyelle\n");
            break;
             case 'O': 
            printf ("la lettre est une Voyelle \n");
            break;
             case 'o': 
            printf ("la lettre est une Voyelle \n");
            break;
             case 'y': 
            printf ("la lettre est une Voyelle \n");
            break;
             case 'Y': 
            printf ("la lettre est une Voyelle \n");
            break;
            
             default : printf("la lettre est un consonne");
             break;
        }

	return 0;
}

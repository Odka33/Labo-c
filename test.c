#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
	// Instanciation d'un tableau
    char str[100];
    // Instanciation d'une variable nous permettant de parcourir notre tableau
    int i = 0;
        
    printf("\n Please Enter any String  :  ");
    // Ajout de l'entrée utilisateur dans le tableau
    scanf("%s", str);
    /*
    Tant qu'il y à des caratères
    Incrémenter de 1 le tableau
    */
    while (str[i] != '\0')
    {
        printf("The Character at %d Index Position = %c \n", i, str[i]);
        i++;
    }
    printf("%s\n",str);
    return 0;
}
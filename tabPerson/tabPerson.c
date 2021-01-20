#include <stdio.h>
#include <stdlib.h>
#include "structure.h"


int main(int argc, char* argv[])
{
    int nbPersonnes = 0;
    int i = 0;
    personne* tab = NULL;

    printf("Nombre de personnes : ");
    scanf("%d", &nbPersonnes);
    
    tab = malloc(nbPersonnes * sizeof(personne));

    for (i = 0; i < nbPersonnes; i++)
    {
        printf("Age : ");
        scanf("%d", &tab[i].age);
        tab[i].np = malloc(sizeof(nomPrenom));
        if (tab[i].np)
        {
            printf("Nom : ");
            scanf("%s", tab[i].np->nom);
            printf("Prenom : ");
            scanf("%s", tab[i].np->prenom);
        }
    }
    
    for (i = 0; i < nbPersonnes; i++)
    {
        printf("%s %s %d\n", tab[i].np->nom, tab[i].np->prenom, tab[i].age);
    }

    for (i = 0; i < nbPersonnes; i++)
    {
        free(tab[i].np);
    }
    free(tab);

    return 0;
}
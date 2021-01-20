#include<stdio.h>
#include<stdlib.h>

int main()

{

    char lettre;

    printf("Donnez une lettre entre 'a' et 'y' ou entre 'A' et 'Y':\n");

    scanf("%c",&lettre);

    lettre++;

    printf("La lettre suivante est: %c.\n",lettre);

    system("pause");

    return 0;

}


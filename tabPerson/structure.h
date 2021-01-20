#ifndef STRUCTURE_H
#define STRUCTURE_H

typedef struct nomPrenom
{
    char nom[20];
    char prenom[20];
} nomPrenom;

typedef struct personne
{
    nomPrenom* np;
    int age;
} personne;

#endif /* STRUCTURE_H */
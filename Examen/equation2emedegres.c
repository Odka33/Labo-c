#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	/*
	Declaration des variables
	*/
	int a,b,c;
	double d,e,f,g;
	/*
	Assignation des variables de l'equation
	*/
    printf("\n Entrer la valeur de a, b et c pour la resolution de l'equation : ");
    scanf("%i%i%i", &a,&b,&c);
    /*
	Calcule du delta
    */
    d = pow(b,2)-4.0*a*(c);
    /*
	Si delta est superieur
    */
    if (d>0)
    {
    	printf("Delta est superieur a 0 nous allons donc resoudre ses deux solutions.\n");
    	e = (-b+sqrt(d))/(2*a);
    	f = (-b-sqrt(d))/(2*a);
    	printf("Les solutions a l'equation suivante sont %lf et %lf\n", e,f);
    }
    /*
	Si delta est egal
    */
    else if (d==0)
    {
    	printf("Delta est egal a 0 nous allons donc resoudre son unique solution.\n");
    	g = (-b/2*a);
    	printf("La solutions unique a l'equation suivante est %lf\n", g);
    }
    /*
	Si delta est inferieur
    */
    else
    {
    	printf("L'equation n'a pas de solution.\n");
    }
}
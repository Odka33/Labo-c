#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	/* code */
	int a,b,c,moy;
	printf("Entrer 3 entiers a, b, c.\n");
	scanf("%d%d%d", &a,&b,&c);
	moy = (a + b + c)/3;
	printf("La moyenne des 3 entiers a,b,c est %d\n", moy);
	return 0;
}
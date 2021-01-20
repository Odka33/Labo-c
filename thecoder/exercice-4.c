#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	/* code */
	int a, b, tmp;
	printf("Entrer 2 nombres entier a et b\n");
	scanf("%d%d", &a,&b);
	printf("Avant a=%d et b=%d\n", a, b);
	tmp = b;
	b = a;
	a = tmp;
	printf("Après a = %d et b = %d\n",a,b);
	return 0;
}
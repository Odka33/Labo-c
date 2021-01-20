#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	/* code */
    double R1,R2,aire1,aire2,aire;
    printf("Donnez les rayons des deux cercles:\n");
    scanf("%lf%lf",&R1,&R2);   
    aire1 = 3.14*R1*R1;
    aire2 = 3.14*R2*R2;
    aire = fabs(aire1-aire2);
    printf("L'aire de la surface entre les deux cercles est: %.4lf\n",aire);
    return 0;
}
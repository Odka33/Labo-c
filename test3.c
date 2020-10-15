#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
    char str[100];
    int i = 0;
    char tmp[256];
    int j = 0;

    printf("\n Please Enter any String  : ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        i++;
    }
    printf("%s\n", str);

    while (i != 0)
    {
        i = i - 1;
        tmp[j] = str[i];
        j = j + 1;

    }
    printf("%s\n", tmp);

    i = 0;
    j = 0;
    while (str[i] && tmp[j] != '\0')
    {
        if (str[i] != tmp[j])
        {
            printf("%s n'est pas un palindrome\n", str);
            break;
        } 
        else if 
        {

        }
        else 
        {
            i++;
            j++; 
        }

    }
    return 0;
}
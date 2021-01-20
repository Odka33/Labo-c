/*
* scriptDetecting palindrome
*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
    /*
    * Initialize variables (array, int).
    */
    char str[256];
    int i = 0;
    char tmp[256];
    int j = 0;
    /*
    * User input
    */
    printf("\n Please Enter any String  : ");
    scanf("%s", str);
    /*
    * Add str to array.
    */
    while (str[i] != '\0')
    {
        i++;
    }
    printf("%s\n", str);
    /*
    * Reverse the array and adding to another.
    */
    while (i != 0)
    {
        i = i - 1;
        tmp[j] = str[i];
        j = j + 1;

    }
    printf("%s\n", tmp);
    return 0;
}
#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter of the function
 * @accept: parameter of the function
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int i = 0;

        while (s[i] != '\0' && strchr(accept, s[i]) != NULL)
        {
                i++;
        }
        return (i);
}

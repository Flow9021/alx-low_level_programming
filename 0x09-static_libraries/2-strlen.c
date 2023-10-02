#include "main.h"
#include <string.h>

/**
 *_strlen - counts the length of a string
 *@s: parameter of the function
 *Return: the length of the string
 */

int _strlen(char *s)
{
        int length = 0;

        while (*s != '\0')
        {
                length++;
                s++;
        }
        return (length);
}

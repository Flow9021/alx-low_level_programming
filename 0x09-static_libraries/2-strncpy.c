#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: parameter of the function
 * @src: parameter of the function
 * @n: parameter of the function
 * Return: p
 */

char *_strncpy(char *dest, char *src, int n)
{
        char *p = dest;

        while (*src != '\0' && n > 0)
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }
        while (n > 0)
        {
                *dest = '\0';
                dest++;
                n--;
        }
        return (p);
}

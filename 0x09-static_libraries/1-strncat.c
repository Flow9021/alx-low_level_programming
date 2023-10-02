#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: parameter of the function
 * @src: parameter of the function
 * @n: parameter of the function
 * Return: p
 */

char *_strncat(char *dest, char *src, int n)
{
        char *p = dest;
                while (*dest != '\0')
                {
                        dest++;
                }
        while (*src != '\0' && n > 0)
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }
        *dest = '\0';
        return (p);
}

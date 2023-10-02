#include <string.h>

/**
 * _strcat -  concatenates two strings
 * @dest: parameter of the function
 * @src: parameter of the function
 * Return: p
 */

char *_strcat(char *dest, char *src)
{
        char *p = dest;

        while (*dest != '\0')
        {
                dest++;
        }
        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return (p);
}

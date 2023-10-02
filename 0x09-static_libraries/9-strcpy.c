#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * dest: parameter of the funtion
 * src: parameter of the function
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return (dest);
}

#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: parameter of the function
 * @s2: parameter of the function
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
        int i;

        for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
        {
                if (s1[i] != s2[i])
                {
                        if (s1[i] < s2[i])
}

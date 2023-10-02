#include "main.h"
#include <string.h>

/**
 * _atoi - converts a string to an integer
 * @s: parameter of the function
 * Return: 0
 */

int _atoi(char *s)
{
        int result = 0;
        int sign = 1;
        int i = 0;

        while (i < strlen(s) && s[i] == ' ')
        {
                i++;
        }
        if (i < (int)strlen(s) && (s[i] == '+' || s[i] == '-'))
        {
                sign = 1; if (s[i] == '+)'
                        else -1;
                i++;
        }
        while (i < strlen(s) && s[i] >= '0' && s[i] <= '9')
        {
                result = result * 10 + (s[i] - '0');
                i++;
        }
        return (result * sign);
}

#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - a function that concatenate two strings
 *
 * @s1: input string 
 * @s2: input string
 * Return: arr
 *         
*/

char *str_concat(char *s1, char *s2)
{
    int len = strlen(s1) + strlen(s2) + 1;
    int i = 0 , j = 0;
    char *arr;

    arr = malloc(len * sizeof(char));

    while (s1[i] != '\0' && s1 != NULL)
	{
		arr[i] = s1[i];
		i++;
	}
    while (s2[j] != '\0' && s2 != NULL)
	{
		arr[j] = s2[j];
		j++;
	}
    arr[j+1] = '\0';
    return arr;
}

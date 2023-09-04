#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - create space in memory which contains a
 *		a compy of the string
 * @str:array of char
 *
 * Return:NUll if str empty or fall to allocate,otherwise return string
 */



char *_strdup(char *str)
{
	int len = strlen(str) + 1, i;
	char *arr;

	if (str == NULL)
		return (str);
	arr = malloc(len * sizeof(char));
	if (arr == NULL)
		return (arr);
	for (i = 0; i < len; ++i)
		arr[i] = str[i];
	return (arr);

}

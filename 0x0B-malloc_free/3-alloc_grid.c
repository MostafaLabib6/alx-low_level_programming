#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 *
 * @width: input to string 1
 * @height: input to string 2
 *
 * Return: NULL on faliure
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				--i;
			}
			free(arr);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			arr[i][k] = 0;
		}
	}

	return (arr);
}

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
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i =0; i < width; i++ )
	{
		arr[i]=(int *) malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}
	for (j =0; j < height; j++ )
	{
		for (k =0; k < width; k++ )
		{   
			arr[j][k] = 0;
		}   
	}
	return (arr);
}

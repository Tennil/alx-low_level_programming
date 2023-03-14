#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)

{
	int **saka;
	int x, y;

if (width <= 0 || height <= 0)
return (NULL);
saka = malloc(sizeof(int *) * height);
if (saka == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
saka[x] = malloc(sizeof(int) * width);
if (saka[x] == NULL)
{
for (; x >= 0; x--)
free(saka[x]);
free(saka);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
saka[x][y] = 0;
}
return (saka);
}

#include <stdlib.h>
//#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = max - min;
	if (min >= max)
		return (0);
	*range = malloc((max - min) * 4);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		**range = min;
		min++;
		(*range)++;
	}
	(*range) -= size;
	return (size);
}
/*
int	main(void)
{
	int	i;
	int	size;
	int	*range;
	int	max = 15;
	int	min = 0;


	size = ft_ultimate_range(&range, min, max);
	while (min < max)
	{
		printf("%i\n", *range);
		range++;
		min++;
	}
	i = 0;
	printf("\n%i", size);
}*/

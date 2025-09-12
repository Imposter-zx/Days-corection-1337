#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	x;

	x = ac - 1;
	while (x > 0)
	{
		write(1, av[x], ft_strlen(av[x]));
		write(1, "\n", 1);
		x--;
	}
	return (0);
}

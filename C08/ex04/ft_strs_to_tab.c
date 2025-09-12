#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(nb % 10 + 48);
	}
}*/

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*p;

	i = 0;
	p = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!p)
		return (NULL);
	while (i < ac)
	{
		p[i].size = ft_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		i++;
	}
	p[i].str = NULL;
	p[i].copy = NULL;
	p[i].size = 0;
	return (p);
}

/*void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}*/

/*int	main()
{
	int	i;
	char *str[] = { "hello", "test", "school", NULL};
	t_stock_str *p = ft_strs_to_tab(3, str);
	
	i = 0;
	while (p[i].str != NULL)
	{
		ft_putnbr(p[i].size);
		write(1, "\n", 1);
		ft_putstr(p[i].str);
		write(1, "\n", 1);
		ft_putstr(p[i].copy);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}*/

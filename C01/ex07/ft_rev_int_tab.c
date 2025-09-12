#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i <= size / 2)
	{
		t = tab[i];
		tab[i] = tab[size -1];
		tab[size -1] = t;
		size--;
		i++;
	}
}

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	nb;

	nb = 'z';
	while (nb >= 'a')
	{
		write(1, &nb, 1);
		nb--;
	}
}

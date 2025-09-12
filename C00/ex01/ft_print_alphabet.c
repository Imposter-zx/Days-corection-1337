#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	nb;

	nb = 'a';
	while (nb <= 'z')
	{
		write(1, &nb, 1);
		nb++;
	}
}
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	y = 0;
	while (dest[y])
		y++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest [y + i] = src [i];
		i++;
	}
	dest[y + i] = '\0';
	return (dest);
}

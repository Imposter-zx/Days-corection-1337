#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[y])
		y++;
	while (src[i])
	{
		dest [y + i] = src [i];
		i++;
	}
	dest[y + i] = 0;
	return (dest);
}

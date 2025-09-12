//#include <unistd.h>
//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		src_len;
	int		i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	ptr = malloc(src_len + 1);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*int	main(void)
{
	char	*str;
	str = ft_strdup("DOJYAANNN!");
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}*/

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = 0;
	return (dest);
}

int	full_str_len(int size, char **strs, int sep_len)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += sep_len;
		i++;
	}
	return (len);
}

void	fill_str(int size, char **strs, char *sep, char *str)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		sep_len;
	int		full_len;

	if (size == 0)
	{
		str = malloc(1);
		if (str)
			str[0] = 0;
		return (str);
	}
	sep_len = ft_strlen(sep);
	full_len = full_str_len(size, strs, sep_len);
	str = malloc(full_len + 1);
	if (!str)
		return (NULL);
	str[0] = 0;
	fill_str(size, strs, sep, str);
	return (str);
}

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
/*int main()
{
    char src[] = {"hello"};
    char dest[7];
    unsigned int size = 7;
    int i = 0;
    char c;

    int a = ft_strlcpy(dest,src, size);
    c = a + '0';

        write(1,&c,1);
         write(1,"\n",1);

    return 0;
}*/

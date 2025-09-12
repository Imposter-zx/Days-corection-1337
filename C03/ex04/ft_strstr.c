#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	sz;
	int	cn;

	sz = 0;
	while (to_find[sz])
		sz++;
	if (sz == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		cn = 0;
		while (str[i + cn] == to_find[cn] && to_find[cn] && str[i + cn])
			cn++;
		if (cn == sz)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*int main()
{
    char str[] = "Bonjour tout le monde";
    char to_find1[] = "tout";
    char to_find2[] = "monde";
    char to_find3[] = "pas";

    char *result;

    result = ft_strstr(str, to_find1);
    if (result)
        printf("Trouvé: %s\n", result);
    else
        printf("Non trouvé: %s\n", to_find1);
}
*/

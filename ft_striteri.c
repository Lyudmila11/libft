#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	i = 0;
	while(s[i] != '\0')
	{
		f(i, &s[i] );
		i++;
	}
}

void	ft_fun(unsigned int n, char* s)
{
	*s = 'h';
	printf("n = %d, s = %c\n", n, *s);
}

int main()
{
	char str[]= "ghfjifjkd";
	ft_striteri(str, ft_fun);
	
	printf("result = %s \n", str );
	return (0);
}

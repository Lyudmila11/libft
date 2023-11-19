#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char const *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char *buffer;
	int len;
	
	len = ft_strlen(s);
	i = 0;
	buffer = malloc(len + 1);
	if(buffer == NULL)
		return (NULL);
	while(s[i] != '\0')
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

char	ft_fun(unsigned int n, char s)
{
	printf("n = %d, s = %c\n", n, s);
	return('u');
}

int main()
{
	char *str = "ghfjifjkd";
	char *r = ft_strmapi(str, ft_fun);
	
	printf("result = %s \n", r);
	return (0);
}

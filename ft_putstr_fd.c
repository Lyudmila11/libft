#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if(s != NULL)
	write(fd, s, ft_strlen(s));
}

int main()
{
	ft_putstr_fd("durak", 1);
	return(0);
}

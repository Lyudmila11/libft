#include <stdio.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if(s != NULL)
	{
		write(fd, s, ft_strlen(s));
		ft_putchar_fd('\n', fd);
	}	
}

int main()
{
	ft_putstr_fd("durak", 1);
	return(0);
}

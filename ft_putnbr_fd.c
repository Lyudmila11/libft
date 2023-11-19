#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
		return;
	}	
	if (n >= 10)	
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

int main()
{
	ft_putnbr_fd(-123, 1);
	return(0);
}

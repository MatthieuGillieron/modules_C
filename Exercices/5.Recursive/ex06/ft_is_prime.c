
#include <stdio.h>\

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
	
int main (void)
{
	printf("%d -> %d\\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\\n", -12, ft_is_prime(-12));
	printf("%d -> %d\\n", 0, ft_is_prime(0));
	printf("%d -> %d\\n", 1, ft_is_prime(1));
	printf("%d -> %d\\n", 2, ft_is_prime(2));
}

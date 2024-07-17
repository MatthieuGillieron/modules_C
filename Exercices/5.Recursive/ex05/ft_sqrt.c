
int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

int    main(void)
{
	printf("sqrt of %d is %d\\n", -2282, ft_sqrt(-2282));
	printf("sqrt of %d is %d\\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\\n", 1454436, ft_sqrt(1454436));
	printf("sqrt of %d is %d\\n", 1411303165, ft_sqrt(1411303165));
	printf("sqrt of %d is %d\\n", 259564321, ft_sqrt(259564321));
	printf("sqrt of %d is %d\\n", 416153106, ft_sqrt(416153106));
        return (0);
}

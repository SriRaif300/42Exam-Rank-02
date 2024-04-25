int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int max = tab[0];

	if (len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > num)
			num = tab[i];
		i++;
	}
	return (num);
}

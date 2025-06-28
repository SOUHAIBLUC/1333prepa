void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	swp;

	i = 0;
	x = size - 1;
	while (i < x)
	{
		swp = tab[i];
		tab[i] = tab[x];
		tab[x] = swp;
		i++;
		x--;
	}
}
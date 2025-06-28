#include <unistd.h>

// Simple function to write a single character
void ft_putchar(char c)
{
	write(1, &c, 1);
}

// Function to calculate length of a string
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

// Function to check if base is valid
int is_valid_base(char *base)
{
	int i = 0;
	int j;

	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// The core function
void ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	if (!is_valid_base(base))
		return;

	base_len = ft_strlen(base);

	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(-(nbr % base_len), base);
		return;
	}

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}

	if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
	}
	ft_putchar(base[nbr % base_len]);
}

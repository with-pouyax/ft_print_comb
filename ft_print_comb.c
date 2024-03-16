#include <unistd.h>

void	ft_print_comb(void);
void	print(char digit[]);

void	ft_print_comb(void)
{
	char	digit[5];

	digit[0] = '0';
	digit[3] = ',';
	digit[4] = ' ';
	digit[0] = '0';
	while (digit[0] <= '7')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '8')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				print(digit);
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}

void	print(char digit[])
{
	if (digit[0] == '7' && digit[1] == '8' && digit[2] == '9')
	{
		write(1, digit, 3);
	}
	else
	{
		write(1, digit, 5);
	}
}

int	main(void)
{
	ft_print_comb();
}

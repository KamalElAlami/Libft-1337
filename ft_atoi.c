#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	double	number;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\t')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return ((int)(number * sign));
}
int main(void)
{
    printf("%d\n", ft_atoi("  -214748364977777777777777777777777777777777777 "));
    printf("%d", atoi("  -214748364977777777777777777777777777777777777  "));

}
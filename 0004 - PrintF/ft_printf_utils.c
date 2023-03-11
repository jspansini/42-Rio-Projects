

#include "ft_printf.h"

int	ft_print_str(char *arg)
{
	int	i;

	i = 0;
	if (!arg)
		return (ft_print_str("(null)"));
	while (arg[i] != '\0')
	{
		ft_putchar(arg[i]);
		i++;
	}
	return (i);
}

int	ft_print_int(int arg)
{
	int	result;

	result = 0;
	if (arg == -2147483648)
	{
		result += ft_print_str("-2147483648");
		return (result);
	}
	if (arg < 0)
	{
		result += ft_putchar('-');
		arg = (arg * -1);
	}
	if (arg >= 10)
		result += ft_print_int(arg / 10);
	result += ft_putchar((arg % 10) + '0');
	return (result);
}

int	ft_print_uint(unsigned int arg)
{
	int	result;

	result = 0;
	if (arg >= 10)
		result += ft_print_uint(arg / 10);
	result += ft_putchar(arg % 10 + 48);
	return (result);
}

int	ft_print_percent(void)
{
	int	result;

	result = ft_putchar('%');
	return (result);
}

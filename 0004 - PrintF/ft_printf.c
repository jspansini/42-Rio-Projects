

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check(va_list args, char type)
{
	int	result;

	result = 0;
	if (type == 'c')
		result += ft_putchar(va_arg(args, int));
	if (type == 's')
		result += ft_print_str(va_arg(args, char *));
	if (type == 'i' || type == 'd')
		result += ft_print_int(va_arg(args, int));
	if (type == 'u')
		result += ft_print_uint(va_arg(args, unsigned int));
	if (type == '%')
		result += ft_print_percent();
	if (type == 'x' || type == 'X')
		result += ft_print_hexa(va_arg(args, unsigned long long), type);
	if (type == 'p')
		result += ft_print_ptr(va_arg(args, unsigned long long));
	return (result);
}

int	ft_printf(const char *str_entrance, ...)
{
	int		i;
	int		str_counter;
	va_list	args;

	i = 0;
	print_len = 0;
	va_start(args, str_entrance);
	while (str_entrance[i] != '\0')
	{
		if (str_entrance[i] == '%')
			str_counter += ft_check(args, str_entrance[++i]);
		else
			str_counter += ft_putchar(str_entrance[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}

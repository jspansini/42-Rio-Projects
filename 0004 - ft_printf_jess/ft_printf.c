



#include "ft_printf.h"

/*
c = char
s = string
d = decimal
i = inteiro
x = hexadecimal lower
u = decimal sem sinal
p = ponteiro
% = porcentagem
X = hexadecimal upper
*/
int	ft_finder(char c, va_list arg)
{
	int	return_value; //o inteiro retornado com a quantidade de printaveis

	len = 0;
	if (c == 'c')
		return_value = ft_print_char(arg);
	if (c == 's')
		return_value = ft_print_str(arg);
    if (c == 'i')
		return_value = ft_print_int(arg);
	if (c == 'x')
		return_value = ft_print_hex_lower(arg);
	if (c == 'X')
		return_value = ft_print_hex_upper(arg);
	if (c == 'd')
		return_value = ft_print_decimal(arg);
	if (c == '%')
	{
		write(1, "%", 1);
		return_value = 1;
	}
	if (c == 'p')
		return_value = ft_pointer(arg);
	if (c == 'u')
		return_value = ft_unsigned(arg);
	return (return_value);
}


int	ft_printf(const char *str, ...)
{	
	int		i;
	int		j;
	va_list	list;

	i = 0;
	j = 0;
	va_start(list, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			j += ft_print_char(str[i]);
			i++;
		}
		else if (str[i] == '%')
		{
			i++;
			if (ft_strchr("cspdiuxX%", str[i]))
				j += print_arg(str[i], list);
			i++;
		}
	}
	va_end(list);
	return (j);
}
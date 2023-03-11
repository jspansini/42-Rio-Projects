#include "ft_printf.h"

int	ft_printchar(va_list arg)
{
	int	c;

	c = va_arg(arg, int);
	ft_printchar(c);
	return (1);
}
#include "ft_printf.h"

int	main(void)
{
	int n;

	n = ft_printf("%i\n", -2147483648);
	ft_printf("%d\n", n);
	return (0);
}

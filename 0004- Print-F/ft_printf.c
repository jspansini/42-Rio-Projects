/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:37:48 by jpansini          #+#    #+#             */
/*   Updated: 2023/03/11 18:41:38 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_finder(char c, va_list arg)
{
	int	return_value;

	return_value = 0;
	if (c == 'c')
		return_value = ft_print_char(va_arg(arg, int));
	if (c == 's')
		return_value = ft_print_string(va_arg(arg, char *));
	if (c == 'i' || c == 'd')
		return_value = ft_print_int(va_arg(arg, int));
	if (c == 'x' || c == 'X')
		return_value = ft_print_hexadecimal(va_arg(arg, unsigned int), c);
	if (c == '%')
		return_value = write(1, "%", 1);
	if (c == 'p')
		return_value = ft_print_pointer(va_arg(arg, unsigned long int));
	if (c == 'u')
		return_value = ft_print_udecimal(va_arg(arg, unsigned int));
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
				j += ft_finder(str[i], list);
			i++;
		}
	}
	va_end(list);
	return (j);
}

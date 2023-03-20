/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:43:17 by jpansini          #+#    #+#             */
/*   Updated: 2023/03/11 19:59:41 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadecimal(unsigned int nbr, char hcase)
{
	char	number[11];
	char	*ref;
	int		i;
	int		count;

	count = 0;
	i = 9;
	number[10] = '\0';
	if (nbr == 0)
	{
		number[i] = '0';
		i--;
	}
	if (hcase == 'x')
		ref = "0123456789abcdef";
	else
		ref = "0123456789ABCDEF";
	while (nbr != 0)
	{
		number[i] = ref[nbr % 16];
		nbr = nbr / 16;
		i--;
	}
	count += ft_print_string(number + i + 1);
	return (count);
}

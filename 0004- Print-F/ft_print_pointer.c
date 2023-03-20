/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:41:47 by jpansini          #+#    #+#             */
/*   Updated: 2023/03/11 18:32:22 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long int nbr)
{
	char	number[17];
	char	*ref;
	int		i;
	int		count;

	count = 0;
	i = 15;
	ref = "0123456789abcdef";
	number[16] = '\0';
	if (nbr == 0)
	{
		number[i] = '0';
		i--;
	}
	while (nbr > 0)
	{
		number[i] = ref[nbr % 16];
		nbr = nbr / 16;
		i--;
	}
	count += ft_print_string("0x") + ft_print_string(number + i + 1);
	return (count);
}

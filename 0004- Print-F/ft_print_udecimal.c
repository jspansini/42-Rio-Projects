/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:28:52 by jpansini          #+#    #+#             */
/*   Updated: 2023/03/11 18:36:24 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_udecimal(unsigned int nbr)
{
	char	number[11];
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
	while (nbr > 0)
	{
		number[i] = '0' + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
	count += ft_print_string(number + i + 1);
	return (count);
}

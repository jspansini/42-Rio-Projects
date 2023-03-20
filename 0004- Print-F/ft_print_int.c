/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:28:52 by jpansini          #+#    #+#             */
/*   Updated: 2023/03/11 19:01:51 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(long int *nbr, char *number, int *sign, int *i)
{
	if (*nbr == 0)
	{
		number[*i] = '0';
		(*i)--;
	}
	if (*nbr < 0)
	{
		*nbr *= -1;
		*sign = 1;
	}
	else
		*sign = 0;
}

int	ft_print_int(long int nbr)
{
	char	number[11];
	int		sign;
	int		i;
	int		count;

	count = 0;
	i = 9;
	number[10] = '\0';
	ft_check(&nbr, number, &sign, &i);
	while (nbr > 0)
	{
		number[i] = '0' + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
	if (sign == 1)
		count += ft_print_char('-');
	count += ft_print_string(number + i + 1);
	return (count);
}

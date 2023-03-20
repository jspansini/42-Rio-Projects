/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:58:12 by jpansini          #+#    #+#             */
/*   Updated: 2023/03/11 18:24:38 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(const char *s)
{
	int	size;
	int	len;

	if (s == NULL)
	{
		len = write(1, "(null)", 6);
		return (len);
	}
	size = ft_strlen(s);
	len = write(1, s, size);
	return (len);
}

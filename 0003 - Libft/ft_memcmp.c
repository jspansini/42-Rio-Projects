/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:43:48 by jpansini          #+#    #+#             */
/*   Updated: 2022/06/11 16:40:52 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sa;
	const unsigned char	*sb;

	sa = (const unsigned char *)s1;
	sb = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (sa[i] != sb[i])
			return (sa[i] - sb[i]);
			i++;
	}
	return (0);
}

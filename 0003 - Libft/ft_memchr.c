/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:55:38 by jpansini          #+#    #+#             */
/*   Updated: 2022/06/11 16:00:03 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*st;
	size_t	i;

	st = (char *)s;
	i = 0;
	while (i < n)
	{
		if (st[i] == c)
			return (&st[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 12:02:36 by jpansini          #+#    #+#             */
/*   Updated: 2022/06/12 11:35:33 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*b;

	b = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (b[i] == c)
			return (&b[i]);
		i--;
	}
	return (0);
}

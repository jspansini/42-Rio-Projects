/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:16:33 by jpansini          #+#    #+#             */
/*   Updated: 2022/06/12 11:28:11 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*b;

	b = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		if (b[i] == c)
			return (&b[i]);
		i++;
	}
	if (s[i] == 0 && c == 0)
		return (&b[i]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:11:00 by jpansini          #+#    #+#             */
/*   Updated: 2022/06/12 11:34:19 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;

	h = (char *)haystack;
	i = 0;
	if (*needle == '\0')
		return (h);
	while (i < len && h[i] != '\0')
	{
		j = 0;
		while (i + j < len && needle[j] == h[i + j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
		{
			return (h + i);
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 10:07:27 by jpansini          #+#    #+#             */
/*   Updated: 2022/06/12 10:07:49 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		index;
	int		end;

	if (!s1)
		return (NULL);
	end = (ft_strlen(s1) - 1);
	index = 0;
	while (s1[index] && ft_strchr(set, s1[index]))
		index++;
	while (s1[end] && ft_strchr(set, s1[end]) && (end > index))
		end--;
	str = ft_substr(s1, index, (end - index + 1));
	return (str);
}

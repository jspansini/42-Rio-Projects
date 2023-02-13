/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:49:16 by jpansini          #+#    #+#             */
/*   Updated: 2022/06/12 10:51:46 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_word(char const *s, char c)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (s[index])
	{
		if (s[index] == c)
		index++;
		else
		{
			count++;
			while (s[index] && s[index] != c)
			index++;
		}
	}
	return (count);
}

static char	*ft_mk_word(char *res, char const *s, int count, int word_len)
{
	int	index;

	index = 0;
	while (word_len > 0)
	{
		res[index] = s[count - word_len];
		index++;
		word_len--;
	}
	res[index] = '\0';
	return (res);
}

static char	**ft_split_fake(char **word, char const *s, char c, int num)
{
	int	index;
	int	count;
	int	word_len;

	index = 0;
	count = 0;
	word_len = 0;
	while (s[count] && index < num)
	{
		while (s[count] && s[count] == c)
		count++;
		while (s[count] && s[count] != c)
		{
			count++;
			word_len++;
		}
		word[index] = malloc(sizeof(char) * (word_len + 1));
		if (!word[index])
			return (NULL);
		ft_mk_word(word[index], s, count, word_len);
		word_len = 0;
		index++;
	}
	word[index] = NULL;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	int		num;

	if (!s)
		return (NULL);
	num = ft_num_word(s, c);
	word = malloc (sizeof(char *) * (num + 1));
	if (!word)
		return (NULL);
	ft_split_fake(word, s, c, num);
	return (word);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpansini <jpansini@student.42.rio >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:38:02 by jpansini          #+#    #+#             */
/*   Updated: 2023/03/11 18:56:52 by jpansini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_finder(char c, va_list arg);
int		ft_printf(const char *str, ...);
int		ft_print_char(char c);
int		ft_print_string(const char *s);
int		ft_print_int(long int nbr);
int		ft_print_hexadecimal(unsigned int nbr, char hcase);
int		ft_print_udecimal(unsigned int nbr);
int		ft_print_pointer(unsigned long int nbr);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
void	ft_check(long int *nbr, char *number, int *sign, int *i);

#endif

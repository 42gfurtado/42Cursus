/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <gfurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:08:01 by gfurtado          #+#    #+#             */
/*   Updated: 2023/02/23 18:51:46 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char s);
int		ft_putstr(char *s);
int		ft_putnumb(int nbr);
int		ft_putpointer(unsigned long long ptr);
int		ft_putunsigned(unsigned int nbr);
int		ft_puthexadecimal(unsigned int nbr, const char format);

#endif

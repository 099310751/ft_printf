/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:51:30 by manvkhac          #+#    #+#             */
/*   Updated: 2022/06/05 16:51:35 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_strlen(char *str);
int	ft_print_nbr(long long int n);
int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_hex(unsigned int a, int ind);
int	ft_print_adr(int i);
int	ft_revprint(char *str, int ind);
int	ft_printf(const char *str, ...);
int	ft_print_ptr(unsigned long long int a, int ind);
#endif

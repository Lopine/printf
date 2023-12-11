/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plachard <plachard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:28:03 by plachard          #+#    #+#             */
/*   Updated: 2023/12/11 12:49:47 by plachard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <unistd.h>

int	    ft_printf(const char *str, ...);
int     printformat(va_list *ap, char format);
ssize_t     print_char(char c);
int     print_str(char *str);
int     print_int(int n);
int     print_unsign(unsigned int n);
int     print_ptr_hex(unsigned long int n, const char format);
int     print_ptr(unsigned long int n);
int     print_hex(unsigned int n, const char format);

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif

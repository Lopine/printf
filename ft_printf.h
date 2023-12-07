#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <unistd.h>

int	    ft_printf(const char *str, ...);
int     printformat(va_list *ap, char format);
int     print_char(char c);
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

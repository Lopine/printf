
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int     print_str(char *str)
{
        int     len;

        len = 0;
        if (str == NULL)
                return (print_str("(null)"));
        while (*str++)
                        len += print_char(*str);
        return (len);
}

int	printformat(va_list *ap, char format)
{
	size_t len;

	len = 0;
	if (format == 'c')
		len += print_char(va_arg(*ap, int));
	else if (format == 's')
		len += print_str(va_arg(*ap, char *));
	else if (format == 'd' || format == 'i')
		len += print_int(va_arg(*ap, int));
	else if (format == 'x' || format == 'X')
		len += print_hex(va_arg(*ap, unsigned int), format);
	else if (format == 'u')
		len += print_unsign(va_arg(*ap, unsigned int));
	else if (format == 'p')
		len += print_ptr((unsigned long int)va_arg(*ap, void *));
	else if (format == '%')
		len += print_char('%');
	return (len)
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	len;
	
	va_start(ap, str);
	len = 0;
	while (str)
	{
		if (*str == '%')
			len += printformat(&ap, &++str);
		else
			len += print_char(&str);
		++str;
	}
	va_end(ap);
	return (len);
}

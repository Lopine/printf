
#include <stdarg.h>
#include <stddef.h>

// attention dans putnb_fd pour le cas du int-min et pour le message d'erreur.
int	print_int(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while (n)
	{
		n /= 10;
		++len;
	}
	ft_putnbr_fd(n, 1);
	return (len);
}

int	print_unsign(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += print_unsign(n / 10);
	len += print_char((n % 10) + '0');
	return (len)
}

int	print_ptr_hex(unsigned long int n, const char format)
{
	int	len;
	char	ref;

	len = 0;
	ref = 'a';
	if (format == 'X')
		ref = 'A';
	if (n >= 16)
		len += print_ptr_hex(n / 16, format);
	n %= 16;
	if (n % 16 < 10)
		print_char(n + '0');
	else
		print_char((n % 16) - 10 + ref);
	return (++len);
}

int	print_ptr(unsigned long int n)
{
	int	len;
	
	len = 0;
	len += print_str("0x");
	len += print_ptr_hex(n, 'x');
	return (len);
}

int	print_hex(unsigned int n, const char format)
{
	int	len;
	
	len += print_ptr_hex(n, format);
	return (len);
}

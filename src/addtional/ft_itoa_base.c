/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:24:39 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 22:45:18 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(unsigned long long n, int base)
{
	int	count;

	count = 1;
	while (n >= (unsigned long long)base)
	{
		n /= (unsigned long long)base;
		count++;
	}
	return (count);
}

/*converts an integer value to a string using the requested base.*/

char	*ft_itoa_base(long long value, int base, int uppercase)
{
	char				*digits;
	char				*str;
	unsigned long long	n;
	int				len;

	if (base < 2 || base > 16)
		return (NULL);
	digits = "0123456789abcdef";
	if (uppercase)
		digits = "0123456789ABCDEF";
	n = (unsigned long long)value;
	if (value < 0 && base == 10)
		n = (unsigned long long)(-value);
	len = ft_count_digits(n, base);
	if (value < 0 && base == 10)
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0 && (value >= 0 || base != 10 || len > 0))
	{
		str[len] = digits[n % (unsigned long long)base];
		n /= (unsigned long long)base;
		len--;
		if (n == 0)
			break ;
	}
	while (len >= 0)
		str[len--] = '0';
	if (value < 0 && base == 10)
		str[0] = '-';
	return (str);
}

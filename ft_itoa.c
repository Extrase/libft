/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:21:08 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/17 13:16:17 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse(char *str)
{
	size_t	i;
	size_t	o;
	char	tmp;
	char	*copy;

	i = 0;
	copy = str;
	o = ft_strlen(str) - 1;
	while (i < o)
	{
		tmp = str[i];
		str[i] = copy[o];
		copy[o] = tmp;
		++i;
		--o;
	}
}

static void	ft_negative(char *str, int n, int i)
{
	if (n < 0)
	{
		n = -n;
		while (n > 0)
		{
			str[i] = n % 10 + '0';
			n = n / 10;
			++i;
		}
		str[i] = '-';
		str[++i] = '\0';
		return ;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		++i;
	}
	str[i] = '\0';
}

static	int	ft_count(int n, int len)
{
	while ((n > 9) || (n < 0))
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_int_min(char *str)
{
	int	i;

	i = 0;
	str[i++] = '8';
	str[i++] = '4';
	str[i++] = '6';
	str[i++] = '3';
	str[i++] = '8';
	str[i++] = '4';
	str[i++] = '7';
	str[i++] = '4';
	str[i++] = '1';
	str[i++] = '2';
	str[i++] = '-';
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = 1;
	len = ft_count(n, len);
	if (n == -2147483648)
		str = malloc(sizeof(char) * (11 + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		ft_int_min(str);
	else if (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	else
		ft_negative(str, n, i);
	ft_reverse(str);
	return (str);
}

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int	main()
// {
// 	char *res = ft_itoa(0);
// 		ft_print_result(res);
// 		free(res);
// }

// int	main()
// {
// 	char	*test;

// 	test = ft_itoa(-589);
// 	printf("%s", test);
// 	free (test);
// 	//test = itoa(589);
// 	//printf("%s", test);
// 	//free (test);
// }

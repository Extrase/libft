/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:03:02 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/19 16:19:23 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	i = 0;
	str = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	while (i < n)
	{
		if (str[i] != str2[i])
			return (str[i] - str2[i]);
		++i;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "";
	char	str2[] = "jfgjfg";

	printf("%d\n", ft_strncmp(str, str2, 100));
	printf("%d\n", strncmp(str, str2, 100));
}*/

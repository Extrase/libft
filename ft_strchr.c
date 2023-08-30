/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:40:36 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/18 09:57:19 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		++s;
	if (*s == (char)c)
		return (((void *)s));
	return (NULL);
}

/*int	main()
{
	char	str[] = "lwjtotitbbb";
	char	str2[] = "lwjtotitbbb";
	printf("%s\n", ft_strchr(str, 97));
	printf("%s", strchr(str2, 97));
}*/

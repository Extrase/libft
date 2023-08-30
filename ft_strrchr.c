/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:41:32 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/18 09:57:39 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*copy;

	i = 0;
	copy = ((char *)s);
	while (copy[i])
		++i;
	while (i >= 0)
	{
		if (copy[i] == (char)c)
			return (copy + i);
		--i;
	}
	return (NULL);
}

/*int	main()
{
	char	str[] = "Ce qui compte c'est pas d'avoir beaucoup de temps";
	char    str2[] = "Ce qui compte c'est pas d'avoir beaucoup de temps";

	printf("%s\n", ft_strrchr(str, 97));
	printf("%s\n", strrchr(str2, 97));
}*/

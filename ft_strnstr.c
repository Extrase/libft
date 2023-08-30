/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:45:36 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/18 10:05:07 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_seum(char *copy, const char *little, size_t j, size_t len)
{
	size_t	i;

	i = 0;
	while (copy[i] == little[i] && little[i] && j < len)
	{
		++j;
		++i;
	}
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		o;
	size_t		j;
	char		*copy;

	if (*big == '\0' && *little == '\0')
		return (((char *)big));
	j = 0;
	o = 0;
	while (little[o])
		o++;
	copy = ((char *)big);
	while (j < len && *copy)
	{
		i = 0;
		if (copy[i] == little[i])
			i = ft_seum(copy, little, j, len);
		if (i == o)
			return (copy);
		++copy;
		++j;
	}
	return (NULL);
}

/*int	main()
{
	char	str[] = "Ce qui compte, c'est pas d'avoir beaucoup de temps";
	char	str2[] = "c'est";

	printf("%s\n", ft_strnstr(str, str2, 20));
	printf("%s\n", strnstr(str, str2, 20));
}*/

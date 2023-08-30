/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:30:18 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/13 17:54:06 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*copy;

	i = ft_strlen(((char *)s1));
	j = ft_strlen(((char *)s2));
	copy = malloc(sizeof(*s1) * (i + j) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = ((char *)s1)[i];
		++i;
	}
	j = 0;
	while (s2[j])
	{
		copy[i] = ((char *)s2)[j];
		++j;
		++i;
	}
	copy[i] = '\0';
	return (copy);
}

/*int	main()
{
	char const	s1[] = "Ce qui compte, c'est pas d'avoir beaucoup de temps";
	char const	s2[] = " c'est de savoir s'en servir";
	char	*test;

	test = ft_strjoin(s1, s2);
	printf("%s\n", test);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:12:25 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/16 15:31:12 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*first;
	unsigned char	*ratio;

	i = 0;
	first = ((unsigned char *)s1);
	ratio = ((unsigned char *)s2);
	while (i < n)
	{
		if (first[i] != ratio[i])
			return (first[i] - ratio[i]);
		++i;
	}
	return (0);
}

/*int	main()
{
	char	s1[] = "C5 qui compte, c'est pas d'avoir beaucoup de temps";
	char	s2[] = "Ce qui compte, c'est pas d'avoir beaucoup de temps";

	printf("%d\n", ft_memcmp(s1, s2, sizeof(int)));
	printf("%d", memcmp(s1, s2, sizeof(int)));
}*/

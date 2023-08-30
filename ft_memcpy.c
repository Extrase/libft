/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:07:05 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/19 11:55:27 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		n--;
	}
	return (dest);
}

/*int	main()
{
	char	src[] = "Ce qui compte, c'est pas d'avoir beaucoup de temps";
	char	dest[1000] = "";
	char	*test;

	test = ft_memcpy(dest, src, sizeof(src));
	printf("%s\n", test);
	test = memcpy(dest, src, sizeof(src));
	printf("%s", test);
}*/

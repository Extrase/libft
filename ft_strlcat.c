/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:28:44 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/18 10:23:17 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}

/*int	main(void)
{
	char	dest[] = "Ce qui compte";
	const char	src[] = " c'est de savoir s'en servir";
	char	dest2[] = "Ce qui compte";
	const char	src2[] = " c'est de savoir s'en servir";
	int	r = ft_strlcat(dest, src, sizeof(dest));
	int	e = strlcat(dest2, src2, sizeof(dest2));

	printf("%s\n", dest);
	printf("%d\n", r);
	printf("%s\n", dest2);
	printf("%d", e);
}*/

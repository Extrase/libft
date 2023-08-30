/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:28:55 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/19 16:18:30 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = (char)c;
		++i;
	}
	return (s);
}

/*int	main()
{
	int	i = 54575;
	void	*s = &i;;
	int	*test;
	int	*test2;

	test = ft_memset(s, 89, sizeof(i));
	test2 = memset(s, 89, sizeof(i));
	printf("%d, %d, %d\n", test[0], test[1], test[2]);
	printf("%d, %d, %d\n", test2[0], test2[1], test2[2]);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:17:20 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/17 17:01:22 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return (((void *)s) + i);
		i++;
	}
	return (NULL);
}

/*int	main()
  {
  unsigned char	*test;
  unsigned char	*test1;
  unsigned char	tmp[] = "";

  test = ft_memchr(tmp, 32, sizeof(tmp));
  printf("%s\n", test);
  test1 = memchr(tmp, 32, sizeof(tmp));
  printf("%s", test);
  }*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:28:46 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/15 19:14:58 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_plus(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
}

static void	ft_moins(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		((char *)dest)[n - 1] = ((char *)src)[n - 1];
		--n;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
		ft_moins(dest, src, n);
	else
		ft_plus(dest, src, n);
	return (dest);
}

/*int	main()
  {
  char    src[] = "Ce qui compte, c'est pas d'avoir beaucoup de temps";
  char    dest[1000] = "";
  char    *test;

  test = ft_memmove(dest, src, sizeof(src));
  printf("%s\n", test);
  test = memmove(dest, src, sizeof(src));
  printf("%s", test);
  }*/

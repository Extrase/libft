/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:03:28 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/19 16:10:29 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	while (i < (size * nmemb))
	{
		str[i] = 0;
		++i;
	}
	return (str);
}

/*int	main()
{
	char	str[] = "cacolac";
	char	*test;
	char	*test1;
	size_t	i = 0;

	while (str[i])
		++i;
	test = ft_calloc(i, sizeof(str));
	printf("%s", test);
	test1 = calloc(i, sizeof(str));
	printf("%s", test1);
}*/

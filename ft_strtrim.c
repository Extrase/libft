/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:54:26 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/18 10:33:04 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		++i;
	}
	return (i);
}

static size_t	ft_end(char *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
		++i;
	--i;
	while (i > 0)
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		--i;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	if (!s1)
		return (NULL);
	i = 0;
	start = ft_start(((char *)s1), set);
	end = ft_end(((char *)s1), set);
	if (s1[start] == '\0')
		return (ft_strdup(""));
	str = malloc(sizeof(char) * ((end - start) + 2));
	if (!str)
		return (NULL);
	while (start <= end)
	{
		str[i] = s1[start];
		++start;
		++i;
	}
	str[i] = '\0';
	return (str);
}

/*int	main()
{
	char const	s1[] = "BLABLAcoucouBLABLAcoucouBLABLA";
	char const	set[] = "BLA";
	char	*test;

	test = ft_strtrim(s1, set);
	printf("%s\n", test);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:11:48 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/16 17:27:23 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_separator(char s, char c)
{
	if (s == c || s == '\0')
		return (1);
	return (0);
}

static size_t	ft_count(char *s, char c)
{
	size_t	lenword;
	size_t	i;

	i = 0;
	lenword = 0;
	while (ft_separator(s[i], c) == 1)
		++i;
	while (ft_separator(s[i], c) == 0)
	{
		++i;
		++lenword;
	}
	return (lenword);
}

static size_t	ft_make(char **str, int count, char *s, char c)
{
	size_t	i;
	size_t	o;
	size_t	lenword;

	i = 0;
	o = 0;
	lenword = ft_count(s, c);
	str[count] = malloc(sizeof(char) * lenword + 1);
	if (!str[count])
		return (0);
	while (s[i])
	{
		if (ft_separator(s[i], c) == 0)
			break ;
		++i;
	}
	while (ft_separator(s[i], c) == 0)
	{
		str[count][o] = s[i];
		++o;
		++i;
	}
	str[count][o] = '\0';
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	wordcount;
	char	**str;

	i = 0;
	wordcount = 0;
	while (s[i])
	{
		if (s[i] != c && ((s[i + 1] == c) || (s[i + 1] == '\0')))
			++wordcount;
		++i;
	}
	i = 0;
	count = 0;
	str = malloc(sizeof(char *) * (wordcount + 1));
	if (!str)
		return (NULL);
	while (count < wordcount)
	{
		i = i + ft_make(str, count, &((char *)s)[i], c);
		++count;
	}
	str[count] = (NULL);
	return (str);
}

// int	main()
// {
// 	char	str[] = "a1a1a1";
// 	int	i = 0;
// 	char	**tab;

// 	tab = ft_split(str, 'a');
// 	while (tab[i])
// 	{
		// printf("%s\n", tab[i]);
// 		++i;
// 	}
// 	while (i >= 0)
// 	{
// 		free (tab[i]);
// 		i--;
// 	}
// 	free (tab);
// 	return (0);
// }

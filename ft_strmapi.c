/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 07:38:34 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/19 16:19:19 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s[i] == '\0')
		return (ft_strdup(""));
	str = malloc(sizeof(char) * ft_strlen(((char *)s)) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, ((char *)s)[i]);
		++i;
	}
	str[i] = '\0';
	return (str);
}

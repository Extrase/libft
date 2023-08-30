/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderkaou <mderkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:16:05 by mderkaou          #+#    #+#             */
/*   Updated: 2022/11/19 11:55:38 by mderkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/*int	main()
{
	int	i = 0;
	int	tab[] = {54, 65, 89, 78};
	char	str[] = "RATIO";

	while(i < 4)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	bzero(tab, sizeof(tab));
	i = 0;
	while(i < 4)
        {
                printf("%d, ", tab[i]);
                i++;
        }
	printf("%s\n", str);
	bzero(str, sizeof(str));
	printf("%s\n", str);

}*/

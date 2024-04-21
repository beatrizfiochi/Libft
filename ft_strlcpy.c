/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:09:36 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/20 19:14:02 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 1;

	while (size - 1 > 0)
	{
		dst[i] = src[i];
		i++;
	}
	return	(ft_strlen(src));
}

int	main(void)
{
	char	str1[] = "123456789";
	char	dst[100];
	char	dst2[100];
	int	i = 3;

	printf("%ld\n", strlcpy(dst, str1, i));
	printf("%s\n", dst);

	printf("%ld\n", ft_strlcpy(dst2, str1, i));
	printf("%s\n", dst2);
}

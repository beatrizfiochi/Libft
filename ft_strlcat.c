/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:28:15 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/21 16:49:10 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_i;
	size_t	src_i;

	dst_i = 0;
	src_i = 0;
	while (dst[dst_i] != '\0' && dst_i < size)
		dst_i++;
	if (dst_i == size)
		return (dst_i + ft_strlen(src));
	while (src[src_i] != '\0')
	{
		if (src_i < (size - dst_i - 1))
			dst[dst_i++] = src[src_i];
		src_i++;
	}
	dst[dst_i] = '\0';
	return (src_i + dst_i);
}

/*int	main(void)
{
	char	dst[] = "Beatriz Fiochi Soares da Silva ";
	char	dst2[] = "Beatriz Fiochi Soares da Silva ";
	char	src[] = "Junho";
	size_t	n = 50;
	size_t	n2 = 6;

	printf("%zu\n", ft_strlcat(dst, src, n));
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst2, src, n2));
	printf("%s\n", dst2);
}*/

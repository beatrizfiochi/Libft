/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:48:06 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/21 12:32:08 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
	{
		((char *)dest)[n] = ((const char *)src)[n];
	}
	return (dest);
}

/*int	main(void)
{
	char	src1[] = "******************";
	char	dest1[] = "Beatriz";
	char	dest2[] = "Beatriz";
//	char	*test = 0;
//	O valor do i deve ser menor ou igual ao tamanho das variáveis dest
	size_t	i = 3;

	memcpy(dest1, src1, i);
	printf("%s\n", dest1);

	ft_memcpy(dest2, src1, i);
	printf("%s\n", dest2);
}*/

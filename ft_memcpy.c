/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:48:06 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/15 18:13:45 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		((char *)dest)[n - 1] = ((const char *)src) [n - 1];
		n--;
	}
	return (dest);
}

/*int	main(void)
{
	char	src1[] = "******************";
	char	dest1[] = "Beatriz";
	char	dest2[] = "Beatriz";
	size_t	i = 10;

	memcpy(dest1, src1, i);
	printf("%s \n", dest1);

	ft_memcpy(dest2, src1, i);
	printf("%s", dest2);
}*/

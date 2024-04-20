/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:52:56 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/04/20 16:59:45 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	tmp[n];

	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	return (dest);
}

/*int	main(void)
{
	char	text1[] = "abcdefghijklmnopqrstuvwyz";	
	char	text2[] = "abcdefghijklmnopqrstuvwyz";
	int	i = 4;
	int j = 6;
	size_t	n = 3;

	printf("Texto original: %s\n", text1);
	memmove(&text1[i], &text1[j],n);
	printf("Texto depois: %s\n", text1);
	ft_memmove(&text2[i], &text2[j], n);
	printf("Texto depois: %s\n", text2);
}*/

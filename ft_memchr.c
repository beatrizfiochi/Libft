/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiochi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:14:55 by bfiochi-          #+#    #+#             */
/*   Updated: 2024/05/07 11:48:39 by bfiochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (*str != ch && n != 0)
	{
		str++;
		n--;
	}
	if (*str == ch && n != 0)
		return ((void *)str);
	return (NULL);
}

/*int	main(void)
{
	unsigned char	s1[] = "Beatriz Fiochi";
	unsigned char	s2[] = "Beatriz Fiochi";
	
	printf("%s\n",(char *)memchr(s1, 'i', 10));
	printf("%s\n", (char *)ft_memchr(s2, 'i', 10));
}*/

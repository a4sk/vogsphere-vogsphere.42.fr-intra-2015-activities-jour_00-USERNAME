/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgenes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 17:02:17 by dgenes            #+#    #+#             */
/*   Updated: 2016/01/22 19:35:05 by dgenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		i2;
	size_t		max;
	char		*new;

	i = 0;
	i2 = 0;
	if (ft_strlen(s) == 0)
		return ((char *)s);
	max = ft_strlen(s) - 1;
	new = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new)
	{
	//remove spaces at the beginning
		while (s[i2] == ' ' || s[i2] == '\n' || s[i2] == '\t')
			i2++;
	//remove spaces at the end
		if (i2 < max)
			while (s[max] == ' ' || s[max] == '\n' || s[max] == '\t')
				max--;
	//copy the rest
		while (i2 <= max)
			new[i++] = s[i2++];	
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}

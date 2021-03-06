/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longmot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhams <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 22:32:50 by oelkhams          #+#    #+#             */
/*   Updated: 2019/04/21 23:14:24 by oelkhams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_longmot(const char *str, int i, char c)
{
	int		size;

	size = 0;
	while (str[i] != c && str[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

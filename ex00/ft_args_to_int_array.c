/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_to_int_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:47:04 by agarrigu          #+#    #+#             */
/*   Updated: 2022/02/19 15:37:06 by agarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_args_to_int_array(char *str);

int	*ft_args_to_int_array(char *str)
{
	int	i;
	int	*tab;

	tab = (int *) malloc(16 * 4);
	i = 0;
	while (str[i] != '\0')
	{
		tab[i] = str[i * 2] - 0x30;
		i++;
	}
	return (tab);
}

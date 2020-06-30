/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:07:00 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 15:20:58 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (*(s + i))
		{
			*(s + i) = '\0';
			i++;
		}
	}
}
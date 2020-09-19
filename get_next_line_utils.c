/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 10:33:16 by clemo             #+#    #+#             */
/*   Updated: 2020/09/19 10:33:16 by clemo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_is_buf_only_minus_one(char *buf)
{
	while (*buf)
	{
		if (*buf != -1)
			return (0);
		buf++;
	}
	return (1);
}

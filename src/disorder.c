/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemonte <diemonte@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 18:06:48 by diemonte          #+#    #+#             */
/*   Updated: 2026/06/13 18:12:05 by diemonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	compute_disorder(t_stack *stack)
{
	int		i;
	int		j;
	double	mistakes;
	double	total;

	if (stack->size < 2)
		return (0.0);
	i = -1;
	mistakes = 0.0;
	total = 0.0;
	while (++i < stack->size)
	{
		j = i;
		while (++j < stack->size)
		{
			total += 1.0;
			if (stack->data[i] > stack->data[j])
				mistakes += 1.0;
		}
	}
	return (mistakes / total);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple_utils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemonte <diemonte@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 12:00:00 by diemonte          #+#    #+#             */
/*   Updated: 2026/06/13 20:31:13 by diemonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	find_max_pos(t_stack *s)
{
	int	best;
	int	i;

	best = 0;
	i = 1;
	while (i < s->size)
	{
		if (s->data[i] > s->data[best])
			best = i;
		i++;
	}
	return (best);
}

int	find_min_pos(t_stack *s)
{
	int	best;
	int	i;

	best = 0;
	i = 1;
	while (i < s->size)
	{
		if (s->data[i] < s->data[best])
			best = i;
		i++;
	}
	return (best);
}

int	get_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

void	simple_find_pa(t_ctx *ctx, int *best_pb, int *best_ta)
{
	int	j;
	int	ta;
	int	cost;
	int	best;

	best = 2147483647;
	*best_pb = 0;
	*best_ta = 0;
	j = 0;
	while (j < ctx->b.size)
	{
		ta = simple_target_a(&ctx->a, ctx->b.data[j]);
		cost = simple_combined(ta, j, ctx->a.size, ctx->b.size);
		if (cost < best)
		{
			best = cost;
			*best_pb = j;
			*best_ta = ta;
		}
		j++;
	}
}

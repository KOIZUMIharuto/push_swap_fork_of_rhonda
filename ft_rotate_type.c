/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_rotate_type.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 00:17:14 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/21 00:17:14 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->num);
	while (tmp != NULL) //より回転コストが少ない択にする
	{
		if (i > ft_case_rarb(a, b, tmp->num)) 
			i = ft_case_rarb(a, b, tmp->num);
		if (i > ft_case_rrarrb(a, b, tmp->num))
			i = ft_case_rrarrb(a, b, tmp->num);
		if (i > ft_case_rarrb(a, b, tmp->num))
			i = ft_case_rarrb(a, b, tmp->num);
		if (i > ft_case_rrarb(a, b, tmp->num))
			i = ft_case_rrarb(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}
// #include <stdio.h>
int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->num);
	// printf("rotate_type_ba: %d\n", i);
	while (tmp != NULL)
	{
		if (i > ft_case_rarb_a(a, b, tmp->num))
			i = ft_case_rarb_a(a, b, tmp->num);
		if (i > ft_case_rrarrb_a(a, b, tmp->num))
			i = ft_case_rrarrb_a(a, b, tmp->num);
		if (i > ft_case_rarrb_a(a, b, tmp->num))
			i = ft_case_rarrb_a(a, b, tmp->num);
		if (i > ft_case_rrarb_a(a, b, tmp->num))
			i = ft_case_rrarb_a(a, b, tmp->num);
		tmp = tmp->next;
	}
	// printf("rotate_type_ba: %d\n", i);
	return (i);
}

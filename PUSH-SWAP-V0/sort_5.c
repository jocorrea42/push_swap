/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:37:27 by jocorrea          #+#    #+#             */
/*   Updated: 2023/06/01 12:03:53 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_stack	*ft_stacklast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	if (!(stack)->next)
		return (stack);
	while (stack && (stack)->next)
		stack = (stack)->next;
	return (stack);
}

void caso3(t_stack **a)
{
    int first;
    int last;
    int next;
    
    first = (*a)->value;
    last = ft_stacklast(*a)->value;
    next = (*a)->next->value;
    if (first > next && first < last)
        sa(a);
    else if (first < next && first > last)
        rra(a);
    else if (first > next && first > last)
    {
        ra(a);
        if (next > last)
            sa(a);
    }
    else if (first < next && next > last)
    {
        sa(a);
        ra(a);
    }

}

void    caso4(t_stack **a, t_stack **b)
{
    pb(b,a);
    caso3(a);
    if ((*b)->value < (*a)->value)
        pa(a,b);
    else if  ((*b)->value > ft_stacklast(*a)->value)
    {
        pa(a,b);
        ra(a);
    }
    else if ((*b)->value > (*a)->next->value)
    {
        rra(a);
        pa(a, b);
        ra(a);
        ra(a);
    }
    else
    {
        pa(a,b);
        sa(a);
    }
}

void    caso5(t_stack **a, t_stack **b)
{
    pb(b, a);
    caso4(a,b);
    if ((*b)->value < (*a)->value)
        pa(a, b);
    else if ((*b)->value > ft_stacklast(*a)->value)
    {
        pa(a,b);
        ra(a);
    }
    else if ((*b)->value < (*a)->next->value)
    {
        pa(a, b);
        sa(a);
    }
    else if ((*b)->value < (*a)->next->next->value)
    {
        ra(a);
        ra(a);
        pa(a,b);
        rra(a);
        rra(a);
    }
    else
    {
        rra(a);
        pa(a,b);
        ra(a);
        ra(a);
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:07:02 by jocorrea          #+#    #+#             */
/*   Updated: 2023/06/01 11:19:11 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_stack(t_stack **stack_to, t_stack **stack_from)
{
    t_stack *b;

    b = pop(stack_from);
    if (b)
        push(stack_to, b);
}

void    pa(t_stack **stack_a, t_stack **stack_b)
{
    push_stack(stack_a, stack_b);
    ft_putstr_fd("pa\n", 1);
}

void    pb(t_stack **stack_b, t_stack **stack_a)
{
    push_stack(stack_b, stack_a);
    ft_putstr_fd("pb\n", 1);
}
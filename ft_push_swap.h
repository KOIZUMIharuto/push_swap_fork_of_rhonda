/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhonda <rhonda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 04:55:32 by rhonda            #+#    #+#             */
/*   Updated: 2024/08/23 02:11:30 by rhonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

//include
#include <unistd.h>
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>

//define

//typedef  

//struct
typedef struct s_stack
{
    long num;
    long index;
    struct s_stack *next;
    struct s_stack *prev;
} t_stack;

//function
void    ft_error(void);
void    ft_free(t_stack **list);
int     ft_checkdup(t_stack *a);
int     ft_checksorted(t_stack *a);
t_stack *ft_new_node(int num);
t_stack *ft_parse_args(int argc, char **argv);
void    ft_stack_add_back(t_stack **stack, t_stack *new_node);

void    ft_sort(t_stack **a);
int     ft_rotate_type_ab(t_stack *a, t_stack *b);

int     ft_case_rarb(t_stack *a, t_stack *b, int num);
int     ft_case_rrarrb(t_stack *a, t_stack *b, int num);
int     ft_case_rrarb(t_stack *a, t_stack *b, int num);
int     ft_case_rarrb(t_stack *a, t_stack *b, int num);
int     ft_apply_rarb(t_stack **a, t_stack **b, int num, char c);
int     ft_apply_rrarrb(t_stack **a, t_stack **b, int num, char c);
int     ft_apply_rrarb(t_stack **a, t_stack **b, int num, char c);
int     ft_apply_rarrb(t_stack **a, t_stack **b, int num, char c);

int     ft_find_index(t_stack *x, int num);
int     ft_find_place_b(t_stack *b, int num_push);
int     ft_find_place_a(t_stack *a, int num_push);

void    ft_px(t_stack **y, t_stack **x, int stack, int j);
void    ft_sx(t_stack **x, int stack, int j);
void    ft_ss(t_stack **a, t_stack **b, int j);
void    ft_rx(t_stack **x, int stack, int j);
void    ft_rr(t_stack **a, t_stack **b, int j);
void    ft_rrx(t_stack **x, int stack, int j);
void    ft_rrr(t_stack **a, t_stack **b, int j);

void    ft_putchar(int c);
int     ft_atoi(const char *str);
char    **ft_split(char const *s, char c);
t_stack *ft_listlast(t_stack *list);
int     ft_listsize(t_stack *list);
int     ft_min(t_stack *a);
int     ft_max(t_stack *a);

#endif

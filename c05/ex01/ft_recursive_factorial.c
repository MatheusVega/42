/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathfern <mathfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:10:34 by mathfern          #+#    #+#             */
/*   Updated: 2021/04/16 17:19:12 by mathfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return (0);
	if((nb == 1) || (nb == 0))
		return (1);
	else
		return (ft_recursive_factorial(nb-1) * nb);
}

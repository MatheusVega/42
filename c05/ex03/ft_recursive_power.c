/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathfern <mathfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:32:50 by mathfern          #+#    #+#             */
/*   Updated: 2021/04/16 20:06:51 by mathfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if(power < 0)
		return (0);
	if ((nb == 0) || (power == 0))
		return (0);
	if (power > 1)
		return (ft_recursive_power(nb ,--power) * nb);
	return (nb);
}

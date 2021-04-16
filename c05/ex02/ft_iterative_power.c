/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathfern <mathfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:23:35 by mathfern          #+#    #+#             */
/*   Updated: 2021/04/15 20:28:02 by mathfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	unsigned int pot;

	if ((nb == 0) && (power == 0))
		return (0);
	while(power > 1)
	{
		pot = pot * nb;
		power--;
	}
	return (pot);
}

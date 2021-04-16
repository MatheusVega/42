/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathfern <mathfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 23:00:32 by mathfern          #+#    #+#             */
/*   Updated: 2021/04/16 23:09:09 by mathfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_calc(int nb, int i)
{
	if (i == 46341)
		return (0);
	if (i * i == nb)
		return (i);
	if (i * i > nb)
		return (0);
	i++;
	return (ft_calc(nb, i));
}

int ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_calc(nb, 1))
}

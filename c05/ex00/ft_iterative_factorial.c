/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathfern <mathfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:52:31 by mathfern          #+#    #+#             */
/*   Updated: 2021/04/16 16:56:18 by mathfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int fat;

	fat = 1;
	if(n < 0)
	{
		return (0);
	}
	while (n > 0)
	{
		fat = fat * n;
		n--;
	}
	return (fat);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:44:48 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/07 10:51:48 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (i);
	i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}
/*
int main(void)
{
    printf("%d\n", ft_recursive_factorial(5));
    return (0);
}
*/

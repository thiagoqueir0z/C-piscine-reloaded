/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:25:57 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/07 10:31:19 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int x = 10;
    int y = 5;
    int div;
    int mod;

    ft_div_mod(x, y, &div, &mod);
    printf("%d\n", div);
    printf("%d\n", mod);
}
*/

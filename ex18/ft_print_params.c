/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:26:07 by thiferre          #+#    #+#             */
/*   Updated: 2025/10/07 12:31:14 by thiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	counter;
	int	i;

	counter = 1;
	i = 0;
	if (argc > 1)
	{
		while (counter < argc)
		{
			while (argv[counter][i])
			{
				ft_putchar(argv[counter][i]);
				i++;
			}
			i = 0;
			ft_putchar('\n');
			counter++;
		}
	}
}

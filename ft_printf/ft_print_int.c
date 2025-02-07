/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vihane <vihane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:47:16 by vihane            #+#    #+#             */
/*   Updated: 2024/06/11 20:46:11 by vihane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ft_int_len(int n)
{
	size_t	total;

	total = 0;
	if (n <= 0)
		total++;
	while (n)
	{
		total++;
		n /= 10;
	}
	return (total);
}

void	ft_print_int(int nb, int *writtencharacter)
{
	ft_putnbr_fd(nb, 1);
	(*writtencharacter) += ft_int_len(nb);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:20:09 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 22:20:27 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_int_len(int nbr)
{
	unsigned int	len;
	long			l_nbr;

	len = 0;
	l_nbr = nbr;
	if (l_nbr == 0)
		return (1);
	if (l_nbr < 0)
	{
		len++;
		l_nbr = -l_nbr;
	}
	while (l_nbr)
	{
		l_nbr /= 10;
		len++;
	}
	return (len);
}

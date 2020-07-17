/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogazide <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:20:12 by nogazide          #+#    #+#             */
/*   Updated: 2020/07/17 11:32:09 by nogazide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		 ft_iterative_factorial(int nb)
{
	int		product;
	product = 1;

	 while( nb > 0 )
	 {
		 product = product * nb;
		 nb--;
	 }
	 return(product);
}



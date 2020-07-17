/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterativ_power.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogazide <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:24:03 by nogazide          #+#    #+#             */
/*   Updated: 2020/07/17 11:34:26 by nogazide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


	
int		ft_iterative_power(int nb, int power)
{
	int		answer;
	answer = 1;

	while(power >  0)
	{
		answer = answer * nb;
		power--;
	}
	return answer;

if(power == 0)
	{
		return(1);
	}

	else
	{
		return(0);
	}
}

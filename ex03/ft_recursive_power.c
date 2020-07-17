/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogazide <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:31:41 by nogazide          #+#    #+#             */
/*   Updated: 2020/07/17 12:31:55 by nogazide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_recursive_power(int nb, int power)
{
	int		answer;
	answer = 1;

	if( power ==  0)
	{
		return(1);
	}

	if(power < 0)
	{
		return(0);
	}
	else
	{
		answer =  nb * ft_recursive_power(nb, power- 1);
		return answer;
	}
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alstefan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:25:33 by alstefan          #+#    #+#             */
/*   Updated: 2024/02/16 09:54:16 by alstefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
  int result;

  result = nb;
  if (result > result * nb)
    return (0);
  else if (power > 1)
    return (result * ft_recursive_power(result, power - 1));
  else if (power == 0)
    return (1);
  else if (power < 0)
    return (0);
  else
    return (result);
}
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

int ft_is_prime(int nb)
{
  int i;

  i = 2;
  while (i <= nb / i)
  {
    if (nb % i == 0)
      return (0);
    i++;
  }
  return (1);
}

int ft_find_next_prime(int nb)
{
  int i;

  i = nb;
  if (i < 2)
    return (2);
  while (!ft_is_prime(i))
    i++;
  return (i);
}
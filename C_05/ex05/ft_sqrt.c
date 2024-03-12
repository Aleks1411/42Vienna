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

int ft_sqrt(int nb)
{
  int rad_exp;

  rad_exp = 1;
  if (nb > 0)
  {
    while (rad_exp * rad_exp <= nb)
    {
      if (rad_exp * rad_exp == nb)
        return (rad_exp);
      if (rad_exp > 46340)
        return (0);
      rad_exp++;
    }
  }
  return (0);
}
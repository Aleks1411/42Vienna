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

int ft_fibonacci(int index)
{
  int val;

  if (index < 0)
    return (-1);
  if (index == 0)
    return (0);
  if (index == 1)
    return (1);
  else
  {
    val = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    return (val);
  }
}
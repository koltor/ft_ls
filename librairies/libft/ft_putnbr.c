/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matheme <matheme@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 15:43:10 by matheme      #+#   ##    ##    #+#       */
/*   Updated: 2019/03/14 17:15:11 by matheme     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int t;
	int r;

	t = 1;
	if (n < 0)
		ft_putchar('-');
	else
		n = -n;
	r = n;
	while (r <= -10)
	{
		r = r / 10;
		t *= 10;
	}
	while (t >= 1)
	{
		ft_putchar(-(n / t - '0'));
		n = n % t;
		t /= 10;
	}
}

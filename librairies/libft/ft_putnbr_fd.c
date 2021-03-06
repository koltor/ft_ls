/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matheme <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 16:47:14 by matheme      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 17:13:43 by matheme     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int t;
	int r;

	t = 1;
	if (n < 0)
		ft_putchar_fd('-', fd);
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
		ft_putchar_fd(-(n / t - '0'), fd);
		n = n % t;
		t /= 10;
	}
}

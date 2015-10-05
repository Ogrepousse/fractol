/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 13:59:31 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/05 16:22:28 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <unistd.h>
#include <mlx.h>
#include <stdio.h>

void	fill_test(t_env *e, int color)
{
	for (int i = 200; i < 300; i++)
	{
		for (int j = 200; j < 300; j++)
		{
			mlx_pixel_put(e->mlx, e->win, i, j, color);
		}
	}

}

int		main(void)
{
	t_env	e;
	if (!(e.mlx = mlx_init())
		|| !(e.win = mlx_new_window(e.mlx, 500, 500, "fractol")))
	{
		ft_putendl_fd("fractol: init error", 2);
		return (1);
	}

	for (int i = 0; i < 1000; i++)
	{
		fill_test(&e, 0xffffff);
	//	sleep(1);
	}

	mlx_expose_hook(e.win, &expose_hook, &e);
	mlx_key_hook(e.win, &key_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}

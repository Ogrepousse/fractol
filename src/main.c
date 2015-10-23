/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 13:59:31 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/22 14:47:39 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <unistd.h>
#include <mlx.h>
#include <stdio.h>
/*
void	fill_test(t_env *e, int color)
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			printf("%d %d\n", i, j);
			unsigned c = ft_image_color(e->img, 0xffffff);
			ft_image_pixel_put(e->img, i, j, c);
		}
	}
}*/

int		main(void)
{
	t_env	e;

	e.lol = 0xffffff;
	if (!(e.mlx = mlx_init())
		|| !(e.win = mlx_new_window(e.mlx, 500, 500, "fractol"))
		|| !(e.img = ft_image_create(e.mlx, 500, 500)))
	{
		ft_putendl_fd("fractol: init error", 2);
		return (1);
	}

	mlx_loop_hook(e.mlx, &loop_hook, &e);
	mlx_expose_hook(e.win, &expose_hook, &e);
	mlx_key_hook(e.win, &key_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}

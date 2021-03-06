/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/05 15:07:12 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/22 14:47:58 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <mlx.h>
#include <stdio.h>

void	fill_test(t_env *e, int color)
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			printf("%d %d\n", i, j);
			unsigned c = ft_image_color(e->img, color);
			ft_image_pixel_put(e->img, i, j, c);
		}
	}
}

int		loop_hook(t_env *e)
{
	fill_test(e, e->lol);
//	e->lol -= 100;
//	if (e->lol < 0)
//		e->lol = 0xffffff;
//	mlx_put_image_to_window(e->mlx, e->win, e->img->ptr, 0, 0);
//	sleep(1);
	return (0);
}

int		expose_hook(t_env *e)
{
	mlx_put_image_to_window(e->mlx, e->win, e->img->ptr, 0, 0);
	return (0);
}

int		key_hook(int keycode, t_env *e)
{
	if (keycode == 53)
	{
		ft_image_destroy(&e->img);
		exit(0);
	}
	return (0);
}

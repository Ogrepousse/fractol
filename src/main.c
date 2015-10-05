/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 13:59:31 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/05 15:17:15 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <unistd.h>
#include <mlx.h>

int		main(void)
{
	t_env	e;
	if (!(e.mlx = mlx_init())
		|| !(e.win = mlx_new_window(e.mlx, 500, 500, "fractol")))
	{
		ft_putendl_fd("fractol: init error", 2);
		return (1);
	}

	mlx_pixel_put(e.mlx, e.win, 250, 250, 0xffffff);

//	mlx_expose_hook(e.win, &expose_hook, &e);
	mlx_key_hook(e.win, &key_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}

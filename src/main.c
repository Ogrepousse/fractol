/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 13:59:31 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/01 18:25:13 by esusseli         ###   ########.fr       */
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
	while (1) ;
	return (0);
}

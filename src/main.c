/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 13:59:31 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/01 15:30:51 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <unistd.h>
#include <mlx.h>

int		main(void)
{
	void	*mlx;
	void	*win;
	write(1, "lol\n", 4);
	ft_putstr("lol\n");
	mlx = mlx_init();
	win = mlx_new_window(mlx, 200, 200, "lol");
	while (1) ;
	return (0);
}

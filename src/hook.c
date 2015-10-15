/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/05 15:07:12 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/15 15:43:09 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>

int		expose_hook(t_env *e)
{
	(void)e;
	return (0);
}

int		key_hook(int keycode, t_env *e)
{
	(void)e;
	printf("%d\n", keycode);
	if (keycode == 53)
	{
		exit(0);
	}
	return (0);
}

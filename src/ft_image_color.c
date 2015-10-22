/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 13:51:20 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/22 13:53:32 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <mlx.h>

unsigned	ft_image_color(const t_img *img, int color)
{
	unsigned	value;

	value = mlx_get_color_value(img->mlx_ptr, color);
	if (img->endian)
		value = ft_bswap_32(value);
	return (value);
}

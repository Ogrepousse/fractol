/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_pixel_put.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 13:53:54 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/22 13:57:20 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <mlx.h>

void	ft_image_pixel_put(t_img *img, int x, int y, unsigned color_value)
{
	ft_memcpy(img->data_addr + x * img->bytes_per_pixel + y * img->size_line,
		&color_value, img->bytes_per_pixel);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 13:30:28 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/22 14:06:15 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <mlx.h>

t_img	*ft_image_create(void *mlx_ptr, int width, int height)
{
	t_img	*img;

	if ((img = (t_img*)ft_memalloc(sizeof(*img))))
	{
		if ((img->ptr = mlx_new_image(mlx_ptr, width, height)))
		{
			img->data_addr = mlx_get_data_addr(img->ptr, &img->bytes_per_pixel,
				&img->size_line, &img->endian);
				img->bytes_per_pixel /= 8;
				img->mlx_ptr = mlx_ptr;
				img->height = height;
				img->width = width;
		}
		else
			ft_memdel((void**)(&img));
	}
	return (img);
}

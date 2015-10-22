/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 13:47:45 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/22 14:06:44 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <mlx.h>

void	ft_image_destroy(t_img **img)
{
	mlx_destroy_image((*img)->mlx_ptr, (*img)->ptr);
	ft_memdel((void**)img);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 14:09:23 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/22 14:39:48 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "libft.h"
# include "fractol_struct.h"
# include "fractol_cdef.h"

int			expose_hook(t_env *e);
int			key_hook(int keycode, t_env *e);
int			loop_hook(t_env *e);

t_img		*ft_image_create(void *mlx_ptr, int width, int height);
void		ft_image_destroy(t_img **img);
unsigned	ft_image_color(const t_img *img, int color);
void		ft_image_pixel_put(t_img *img, int x, int y, unsigned color_value);
unsigned	ft_bswap_32(unsigned x);

#endif

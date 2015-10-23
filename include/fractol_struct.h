/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/01 18:16:10 by esusseli          #+#    #+#             */
/*   Updated: 2015/10/22 14:39:54 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_STRUCT_H
# define FRACTOL_STRUCT_H

typedef struct	s_img
{
	void		*ptr;
	int			width;
	int			endian;
	int			height;
	void		*mlx_ptr;
	int			size_line;
	char		*data_addr;
	int			bytes_per_pixel;
}				t_img;

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	t_img		*img;
	int			lol;
	float		xo;
	float		yo;
	int			iter;
}				t_env;

#endif

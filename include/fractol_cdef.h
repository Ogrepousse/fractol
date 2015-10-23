/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_cdefs.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:27:01 by abouvier          #+#    #+#             */
/*   Updated: 2014/02/09 22:27:00 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_CDEFS_H
# define FRACTOL_CDEFS_H

# ifdef __linux__

#  include <X11/X.h>
#  include <X11/keysym.h>

#  define MLX_KEY_PRESS			KeyPress
#  define MLX_KEY_PRESS_MASK	KeyPressMask
#  define MLX_KEY_RELEASE		KeyRelease
#  define MLX_KEY_RELEASE_MASK	KeyReleaseMask

#  define MLXK_ESCAPE			XK_Escape
#  define MLXK_UP				XK_Up
#  define MLXK_RIGHT			XK_Right
#  define MLXK_DOWN				XK_Down
#  define MLXK_LEFT				XK_Left
#  define MLXK_KP_ADD			XK_KP_Add
#  define MLXK_KP_SUB			XK_KP_Subtract
#  define MLXK_KP_0				XK_KP_Insert
#  define MLXK_C				XK_c
#  define MLXK_R				XK_r

#  define MLX_MOUSE_MOVE		MotionNotify
#  define MLX_MOUSE_MOVE_MASK	PointerMotionMask

#  define MLXK_MOUSE_LEFT		1
#  define MLXK_MOUSE_MIDDLE		2
#  define MLXK_MOUSE_RIGHT		3
#  define MLXK_MOUSE_WHEEL_UP	4
#  define MLXK_MOUSE_WHEEL_DOWN	5

# else

#  define MLX_KEY_PRESS			2
#  define MLX_KEY_PRESS_MASK	(1L << 0)
#  define MLX_KEY_RELEASE		3
#  define MLX_KEY_RELEASE_MASK	(1L << 1)

#  define MLXK_ESCAPE			0x35
#  define MLXK_UP				0x7e
#  define MLXK_RIGHT			0x7c
#  define MLXK_DOWN				0x7d
#  define MLXK_LEFT				0x7b
#  define MLXK_KP_ADD			0x45
#  define MLXK_KP_SUB			0x4e
#  define MLXK_KP_0				0x52
#  define MLXK_C				0x08
#  define MLXK_R				0x0f

#  define MLX_MOUSE_MOVE		6
#  define MLX_MOUSE_MOVE_MASK	(1L << 6)

#  define MLXK_MOUSE_LEFT		1
#  define MLXK_MOUSE_MIDDLE		2
#  define MLXK_MOUSE_RIGHT		3
#  define MLXK_MOUSE_WHEEL_UP	4
#  define MLXK_MOUSE_WHEEL_DOWN	5

# endif

#endif


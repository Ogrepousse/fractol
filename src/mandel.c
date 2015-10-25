#include "fractol.h"
#include <math.h>

#include <stdio.h>

/*float	val_abs(float z1, float z2)
{
	
}*/

void	mandel_iter(t_env *e, float z1, float z2, int i, int j)
{
	int		n;
	float	a;
	float	b;
	float	tmp1;
	float	tmp2;
	float	res;
	int		color;

	n = 0;
	a = z1;
	b = z2;
	while (n < e->iter)
	{
		tmp1 = a;
		tmp2 = b;
		a = tmp1 * tmp1 - tmp2 * tmp2 + z1;
		b = 2 * tmp1 * tmp2 + z2;
		if ((res = a * a + b * b) > 4)
			break ;
		n++;
	}
//	printf("%d %f\n", n, res);
	if (n < e->iter)
		color = n * 0xffffff / e->iter;
	else if (n == e->iter && res > 4)
		color = 0xffffff;
	else
		color = 0;
	ft_image_pixel_put(e->img, i, j, ft_image_color(e->img, color));
}

void	run_pixel(t_env *e)
{
	int		i;
	int		j;

	i = 0;
	while (i < e->img->width)
	{
		j = 0;
		while (j < e->img->height)
		{
			mandel_iter(e, (float)((i - e->img->width / 2) * e->pX) / e->img->width + e->xo, (float)((j - e->img->height / 2) * e->pY) / e->img->height + e->yo, i, j);
			j++;
		}
		i++;
	}
}

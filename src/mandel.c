#include "fractol.h"
#include <math.h>

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

	n = e->iter;
	a = z1;
	b = z2;
	while (n > 0)
	{
		tmp1 = a;
		tmp2 = b;
		a = tmp1 * tmp1 - tmp2 * tmp2 + z1;
		b = 2 * tmp1 * tmp2 + z2;
		n--;
	}
	res = sqrt(a * a + b * b);
	if (res < 100)
		color = res * 0xffffff / 100;
	else
		color = 0xffffff;
	if (res > 2)
		ft_image_pixel_put(e->img, i, j, ft_image_color(e->img, color));
	else
		ft_image_pixel_put(e->img, i, j, ft_image_color(e->img, 0));
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
			mandel_iter(e, (float)((i - e->img->width / 2) * 5) / e->img->width, (float)((j - e->img->height / 2) * 5) / e->img->height, i, j);
			j++;
		}
		i++;
	}
}

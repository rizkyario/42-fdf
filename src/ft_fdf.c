/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 02:23:58 by rnugroho          #+#    #+#             */
/*   Updated: 2018/05/17 14:05:56 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

t_mlx
	*fdf_init(char *title)
{
	t_mlx	*mlx;

	if ((mlx = ft_memalloc(sizeof(t_mlx))) == NULL)
		return (NULL);
	if ((mlx->mlx = mlx_init()) == NULL ||
		(mlx->window = mlx_new_window(mlx->mlx, WIN_WIDTH, WIN_HEIGHT, title)) == NULL)
		return (fdf_free(mlx));
	return (mlx);
}

int
	main(void)
{
	t_mlx	*mlx;

	mlx = fdf_init("Test");
	mlx_mouse_hook(mlx->window, fdf_handle_mouse, mlx);
	mlx_key_hook(mlx->window, fdf_handle_keydown, mlx);
	mlx_loop(mlx);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 02:23:54 by rnugroho          #+#    #+#             */
/*   Updated: 2018/05/17 14:02:27 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
# define FT_FDF_H
# include "libft.h"
# include "mlx.h"

# define WIN_WIDTH		1280
# define WIN_HEIGHT		720

# define EXIT_FAILURE	1
# define EXIT_SUCCESS	0

typedef struct		s_mlx
{
	void		*mlx;
	void		*window;
}					t_mlx;

t_mlx				*fdf_free(t_mlx *mlx);
int					fdf_handle_mouse(int button, int x, int y);
int					fdf_handle_keydown(int key, t_mlx *mlx);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouchet <bsouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 16:25:00 by bsouchet          #+#    #+#             */
/*   Updated: 2017/03/25 18:26:50 by bsouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void		init_colors_hex(t_env *env)
{
	env->hclr[0][0] = 0xa5c82d;
	env->hclr[0][1] = 0x3c9ac3;
	env->hclr[1][0] = 0xc8892e;
	env->hclr[1][1] = 0x7a55c9;
	env->hclr[2][0] = 0x28c8a0;
	env->hclr[2][1] = 0xc95251;
	env->hclr[3][0] = 0x2d8ec8;
	env->hclr[3][1] = 0xc9a736;
}

void		init_colors_rgb(t_env *env)
{
	env->rclr[0][0] = (SDL_Color){165, 200, 45, 255};
	env->rclr[0][1] = (SDL_Color){60, 154, 195, 255};
	env->rclr[1][0] = (SDL_Color){200, 137, 46, 255};
	env->rclr[1][1] = (SDL_Color){121, 84, 201, 255};
	env->rclr[2][0] = (SDL_Color){40, 200, 160, 255};
	env->rclr[2][1] = (SDL_Color){201, 82, 81, 255};
	env->rclr[3][0] = (SDL_Color){45, 142, 200, 255};
	env->rclr[3][1] = (SDL_Color){201, 167, 54, 255};
}

void		init_colors_hsv(t_env *env)
{
	env->clr[0][0] = 73.55;
	env->clr[0][1] = 0.7750;
	env->clr[0][2] = 198.22;
	env->clr[0][3] = 0.6923;
	env->clr[1][0] = 35.39;
	env->clr[1][1] = 0.77;
	env->clr[1][2] = 259.00;
	env->clr[1][3] = 0.58;
	env->clr[2][0] = 165.10;
	env->clr[2][1] = 0.801;
	env->clr[2][2] = 0.53;
	env->clr[2][3] = 0.5969;
	env->clr[3][0] = 202.50;
	env->clr[3][1] = 0.7750;
	env->clr[3][2] = 46.00;
	env->clr[3][3] = 0.73;
}

int			color(t_env *env, int lel, int lol)
{
	t_hsv	hsv;

	if (env->tab[lel][lol][0] > 0 && env->tab[lel][lol][0] <= env->step)
	{
		hsv.h = env->clr[env->curr_clr][0];
		hsv.s = env->clr[env->curr_clr][1];
		hsv.v = ((double)env->tab[lel][lol][3] * 0.00010f);
	}
	else if (env->tab[lel][lol][0] < 0 && env->tab[lel][lol][0] >= -env->step)
	{
		hsv.h = env->clr[env->curr_clr][2];
		hsv.s = env->clr[env->curr_clr][3];
		hsv.v = ((double)env->tab[lel][lol][3] * 0.00010f);
	}
	else
		return (0x454545);
	return (ft_hsv_to_hex(hsv));
}

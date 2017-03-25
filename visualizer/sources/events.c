/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouchet <bsouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 19:45:40 by bsouchet          #+#    #+#             */
/*   Updated: 2017/03/25 18:38:47 by bsouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

static void	render_step(t_env *env)
{
	draw_board(env, -1, -1);
	draw_step(env, env->step, 660);
	draw_title_battle(env);
	draw_progress_bar(env);
}

static void	handle_keyboard_down(t_env *env)
{
	if (CK_DW == SDLK_LEFT && env->step > 0)
	{
		--env->step;
		if (env->draw)
			env->draw = 0;
		render_step(env);
	}
	else if (CK_DW == SDLK_RIGHT && env->step < env->m_step)
	{
		++env->step;
		if (env->draw)
			env->draw = (env->draw) ? 0 : 0;
		render_step(env);
	}
	else if (CK_DW == SDLK_LSHIFT || CK_DW == SDLK_RSHIFT || CK_DW == SDLK_TAB)
	{
		if (env->curr_clr == NB_CLR_R)
			env->curr_clr = 0;
		else
			++env->curr_clr;
		render_step(env);
	}
}

static void	handle_keyboard_up(t_env *env)
{
	if (CK_DW == SDLK_KP_ENTER || CK_DW == SDLK_RETURN ||
	CK_DW == SDLK_RETURN2 || CK_DW == SDLK_END)
	{
		env->draw = (env->draw) ? 0 : 1;
		env->play = (env->draw) ? 1 : 0;
	}
}

void		handle_events(t_env *env)
{
	if (env->event.window.event == SDL_WINDOWEVENT_CLOSE || (env->event.type ==
	SDL_KEYDOWN && env->event.key.keysym.sym == SDLK_ESCAPE))
		env->run = 0;
	if (env->event.type == 0x300)
		handle_keyboard_down(env);
	if (env->event.type == 0x301)
		handle_keyboard_up(env);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouchet <bsouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 17:36:47 by bsouchet          #+#    #+#             */
/*   Updated: 2017/03/25 18:18:55 by bsouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void		get_infos(t_env *env, char *line, int fd)
{
	fd = open("/tmp/filler.dat", O_RDWR);
	get_next_line(fd, &line);
	env->map_name = ft_name(line, "");
	free(line);
	get_next_line(fd, &line);
	env->ny = ft_atoi(line, 0);
	env->t_ny = ft_strdup(line);
	free(line);
	get_next_line(fd, &line);
	env->nx = ft_atoi(line, 0);
	env->t_nx = ft_strdup(line);
	free(line);
	get_next_line(fd, &line);
	env->seed_rand = ft_strdup(line);
	free(line);
	get_next_line(fd, &line);
	env->name_p1 = ft_name(line, ".filler");
	free(line);
	get_next_line(fd, &line);
	env->name_p2 = ft_name(line, ".filler");
	free(line);
}

static void	stock_line(t_env *env, int lns, char *line, int i)
{
	while (line[++i])
	{
		if ((line[i] == 'O' || line[i] == 'o') && env->tab[lns][i][0] == 0)
		{
			++env->score_p1;
			env->tab[lns][i][0] = env->m_step + 1;
			env->tab[lns][i][3] = env->value_clr_p1;
		}
		else if ((line[i] == 'X' || line[i] == 'x') && env->tab[lns][i][0] == 0)
		{
			++env->score_p2;
			env->tab[lns][i][0] = -(env->m_step + 1);
			env->tab[lns][i][3] = env->value_clr_p2;
		}
	}
	free(line);
}

void		get_file(t_env *env, short lns, char *line)
{
	if (lseek(env->fd,
	((env->m_step * env->size_tab + 5) * sizeof(char)), 0) < 0 && ++env->error)
		return ;
	while (++lns < env->ny && get_next_line(env->fd, &line) > 0)
	{
		if (ft_strcmp(line, "END_OF_BATTLE", 0) && (env->parse = 0) != -1)
		{
			free(line);
			return ;
		}
		stock_line(env, lns, line, -1);
	}
	env->score[env->m_step + 1][0] = env->score_p1;
	env->score[env->m_step + 1][1] = env->score_p2;
	if (lns == env->ny && (env->error = 0) != -1 && ++env->m_step)
	{
		if (env->draw)
			++env->step;
	}
	else
		++env->error;
	if (((env->error + 1) % 20) == 0)
		usleep(20000);
	draw_step(env, env->m_step, 684);
	draw_time(env);
}

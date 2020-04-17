/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 21:01:19 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/17 11:33:59 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_two.h"

t_phil	*create_struct_pointer(void)
{
	t_phil *phil;

	if (!(phil = malloc(sizeof(t_phil))))
		return (NULL);
	phil->index = -1;
	phil->nb_philosophers = 0;
	phil->time_to_sleep = 0;
	phil->time_to_eat = 0;
	phil->time_to_die = 0;
	phil->nb_must_eat = 0;
	phil->index = 0;
	phil->dead = 0;
	phil->print_dead = 0;
	phil->thread = NULL;
	return (phil);
}

void	destroy_sems(void)
{
	sem_unlink("forks");
	sem_unlink("inc");
	sem_unlink("print");
}

void	free_struct(t_phil *phil)
{
	//destroy_sems();
	free(phil->thread);
	free(phil->last_eat);
	free(phil);
}

void	print_struct(t_phil *phil)
{
	printf("nb_philosophers : %d\n", phil->nb_philosophers);
	printf("time_to_die : %d\n", phil->time_to_die);
	printf("time_to_eat : %d\n", phil->time_to_eat);
	printf("time_to_sleep : %d\n", phil->time_to_sleep);
	printf("nb_must_eat : %d\n", phil->nb_must_eat);
}
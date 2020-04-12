/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_one.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 06:01:43 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/12 08:19:12 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_ONE_H
# define PHILO_ONE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

typedef struct	s_phil
{
	int				nb_philosophers;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				nb_must_eat;
	pthread_t		*threads;
	pthread_mutex_t	*mutexs;
}				t_phil;

void	ft_putstr(char *s);
int		ft_atoi(char *str);
int		get_args(int ac, char **av, t_phil *phil);
t_phil	*create_struct_pointer();
void	print_struct(t_phil *phil);

#endif
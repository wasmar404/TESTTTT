void update_bool_one_dead(t_philo *philos)
{
	int i = 0;
	while (i < philos->input->num_of_philos)
	{
		pthread_mutex_lock((philos->data->dead));

		philos[i].one_dead = true;
		pthread_mutex_unlock(philos->data->dead);
		
		i++;
	}
}
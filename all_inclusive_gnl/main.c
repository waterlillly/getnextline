/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 04:50:52 by lbaumeis          #+#    #+#             */
/*   Updated: 2024/01/20 06:30:35 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <time.h>

int	main(void)
{
	char	*line;
	int		fd;
	int		i;
	time_t	start;
	time_t	end;

	time (&start);
	i = 1;
	fd = open("big_line.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("LINE %d: %s", i, line);
		free(line);
		line = get_next_line(fd);
		i++;
		if (line == NULL)
		{
			printf("LINE %d: %s", i, line);
			break ;
		}
	}
	free(line);
	time (&end);
	return (printf ("\ntime: %.3lf seconds\n", difftime (end, start)), 0);
}

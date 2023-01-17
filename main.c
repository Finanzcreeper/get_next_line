/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:10:52 by nreher            #+#    #+#             */
/*   Updated: 2023/01/16 21:57:55 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*out;
	int		reps;
	int		c;

	printf("lines: ");
	scanf("%d", &reps);
	c = 0;
	fd = open("read_error.txt", O_RDONLY);
	while (c < reps)
	{
		out = get_next_line(fd);
		printf("{%s}\n", out);
		free(out);
		c++;
	}
	return (0);
}

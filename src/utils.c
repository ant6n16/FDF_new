/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:27:23 by antdelga          #+#    #+#             */
/*   Updated: 2023/04/20 15:03:35 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

void	ft_leaks(void)
{
	system ("leaks -q fdf");
}

void	draw_listpoints(t_data *points, int tam, int cont_lines)
{
	int	index;

	index = -1;
	while (++index < tam * cont_lines)
	{
		ft_printf("%d\n", index);
		ft_printf("Z: %d\n", points[index].z);
		ft_printf("R: %d\n", points[index].r);
		ft_printf("G: %d\n", points[index].g);
		ft_printf("B: %d\n", points[index].b);
		ft_printf("T: %d\n", points[index].t);
		ft_printf("Xiso: %d\n", points[index].xiso);
		ft_printf("Yiso: %d\n\n", points[index].yiso);
	}
}

/* t_packet	fill_packet(t_data *points, t_img *image)
{
	t_packet	packet;

	packet.list = points;
	packet.size = image;
	return (packet);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validpath.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:28:55 by msoriano          #+#    #+#             */
/*   Updated: 2023/11/09 19:05:07 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "../so_long.h"

void check_exit(t_complete *game, int i, int j)
{
	if (game->map_copy[i][j - 1] != '1' && game->map_copy[i][j - 1] != 'P' )
	{
		game->map_copy[i][j - 1] = 'P';
		check_exit(game, i, j - 1);
	}
	if (game->map_copy[i - 1][j] != '1' && game->map_copy[i - 1][j] != 'P')
	{
		game->map_copy[i - 1][j] = 'P';
		check_exit(game, i - 1, j);
	}
	if (game->map_copy[i][j + 1] != '1' && game->map_copy[i][j + 1] != 'P')
	{
		game->map_copy[i][j + 1] = 'P';
		check_exit(game, i, j + 1);
	}
	if (game->map_copy[i + 1][j] != '1' && game->map_copy[i + 1][j] != 'P')
	{
		game->map_copy[i + 1][j] = 'P';
		check_exit(game, i + 1, j);
	}
	if(game->map[i][j] != 'E')
			ft_printf("Error!\nThere is no valid path on this map \n The exit is not accesible\n");
}
void check_items(t_complete *game, int i, int j)
{
		if (game->map_copy[i][j - 1] != '1' && game->map_copy[i][j - 1] != 'P' )
	{
		game->map_copy[i][j - 1] = 'P';
		check_exit(game, i, j - 1);
	}
	if (game->map_copy[i - 1][j] != '1' && game->map_copy[i - 1][j] != 'P')
	{
		game->map_copy[i - 1][j] = 'P';
		check_exit(game, i - 1, j);
	}
	if (game->map_copy[i][j + 1] != '1' && game->map_copy[i][j + 1] != 'P')
	{
		game->map_copy[i][j + 1] = 'P';
		check_exit(game, i, j + 1);
	}
	if (game->map_copy[i + 1][j] != '1' && game->map_copy[i + 1][j] != 'P')
	{
		game->map_copy[i + 1][j] = 'P';
		check_exit(game, i + 1, j);
	}
	if(game->collectables != 0)
			ft_printf("Error!\nThere is no valid path on this map \n Collectables are not reachable \n");
}*/

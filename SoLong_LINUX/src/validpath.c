/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validpath.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:28:55 by msoriano          #+#    #+#             */
/*   Updated: 2025/02/13 18:12:34 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_exit_accesible(t_game *game, int i, int j)
{
	if (game->map_copy[i][j - 1] != '1' && game->map_copy[i][j - 1] != 'P' )
	{
		game->map_copy[i][j - 1] = 'P';
		check_exit_accesible(game, i, j - 1);
	}
	if (game->map_copy[i - 1][j] != '1' && game->map_copy[i - 1][j] != 'P')
	{
		game->map_copy[i - 1][j] = 'P';
		check_exit_accesible(game, i - 1, j);
	}
	if (game->map_copy[i][j + 1] != '1' && game->map_copy[i][j + 1] != 'P')
	{
		game->map_copy[i][j + 1] = 'P';
		check_exit_accesible(game, i, j + 1);
	}
	if (game->map_copy[i + 1][j] != '1' && game->map_copy[i + 1][j] != 'P')
	{
		game->map_copy[i + 1][j] = 'P';
		check_exit_accesible(game, i + 1, j);
	}
}

void	check_e_c(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map_copy[i] != NULL)
	{
		j = 0;
		while (game->map_copy[i][j] != '\0')
		{
			if (game->map_copy[i][j] == 'E' || game->map_copy[i][j] == 'C')
			{
				printf("Error! There is not a valid path");
				exit_point(game);
			}
			j++;
		}
		i++;
	}
}

void	copy_map(t_game *game)
{
	int	line;
	int	i;
	int	p_coords[2];

	game->map_copy = (char **)malloc(sizeof(char *) * (game->heightmap + 1));
	line = 0;
	while (line < game->heightmap)
	{
		i = 0;
		game->map_copy[line] = (char *)malloc(strlen(game->map[line]) + 1);
		while (game->map[line][i] != '\0')
		{
			if (game->map[line][i] == 'P')
			{
				p_coords[0] = i;
				p_coords[1] = line;
			}
			game->map_copy[line][i] = game->map[line][i];
			i++;
		}
		game->map_copy[line][i] = '\0';
		line++;
	}
	game->map_copy[line] = NULL;
	fkinnorminette(game, p_coords[1], p_coords[0]);
}

void	fkinnorminette(t_game *game, int p, int p2)
{
	check_exit_accesible(game, p, p2);
	check_e_c(game);
}

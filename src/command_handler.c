/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otahirov <otahirov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 11:26:32 by ori               #+#    #+#             */
/*   Updated: 2019/01/21 14:49:15 by otahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ssl.h"

/*
**	
**	Usage: ./ft_ssl command [options] [args]
**	
*/

void	cmdhandle(char *cmd, char *args)
{
	int		i;

	i = 0;
	while (i < TABLE)
	{
		if (!ft_strcmp(g_lookup[i].name, cmd))
		{
			g_lookup[i].func((uint8_t *)args, ft_strlen(args));
			break ;
		}
		i++;
	}
}
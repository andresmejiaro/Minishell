/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:52:32 by amejia            #+#    #+#             */
/*   Updated: 2023/05/23 23:39:04 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

t_state	g_state;

int	main(int argc, char **argv, char **envp)
{
	if (!ft_init(argc, argv, envp))
		return (0);
	prompt_linux();
	ft_envclear(&g_state.envp);
	free(g_state.home_dir);
	return (g_state.last_return);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:19:52 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/24 10:46:15 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*read_and_save(int fd, char *stash);
char	*trim_right(char *stash);
char	*trim_left(char *stash);

int		ft_strlen(char *str);
int		no_eol_found(char *buffer);
char	*ft_strjoin(char *stash, char *buffer);
char	*free_stash(char *stash);

#endif
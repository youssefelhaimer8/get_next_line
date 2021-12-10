/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:52:51 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/12/09 16:16:35 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
// # ifndef BUFFER_SIZE
// # define BUFFER_SIZE 42
// # endif

char	*ft_substr(char *s, int start, int len);
char	*ft_strjoin(char  *s1, char  *s2);
char 	*get_next_line(int fd);
int		ft_strlen(char *s);
# endif
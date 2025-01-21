/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:47:00 by bosokyrk          #+#    #+#             */
/*   Updated: 2024/12/19 18:47:28 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>


#ifndef BUFFER_SIZE
#define BUFFER_SIZE 100
#endif

char *get_next_line(int fd);

char *reading(int fd, char *stringread);
char *alocating(char *stringout);
char *stringwriting(char *stringread, char *stringout, int i);

#endif

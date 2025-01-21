/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:44:50 by bosokyrk          #+#    #+#             */
/*   Updated: 2025/01/17 20:43:33 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static int line;
    int i;
    int counted;
    char *stringout;
    char *stringread;

    counted = 0;
    i = 0;
    stringread = reading(fd, stringread);
    stringout = alocating(stringout);
    if(fd < 0 || BUFFER_SIZE < 0)
        return (NULL);
    while(stringread[i] != '\0')
    {
        if(counted == line)
        {
            stringout = stringwriting(stringread, stringout, i);
            line++;
            return(stringout);
        }
        if(stringread[i] == '\n' || stringread[i] == '\0')
            counted++;
        i++;
    }
    return (NULL);
}

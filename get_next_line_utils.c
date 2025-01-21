/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosokyrk <bosokyrk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:45:41 by bosokyrk          #+#    #+#             */
/*   Updated: 2024/12/19 18:47:44 by bosokyrk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *reading(int fd, char *stringread)
{
    ssize_t amountread;

    amountread = read(fd, stringread, (BUFFER_SIZE));
    if(amountread < 0)
        return (NULL);
    return(stringread);
}
char *alocating(char *stringout)
{
    stringout = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if(!stringout)
        return (NULL);
    return (stringout);
}
char *stringwriting(char *stringread, char *stringout, int i)
{
    int k;

    k = 0;
    while(stringread[i] != '\n' && stringread[i] != '\0')
    {
        stringout[k] = stringread[i];
        i++;
        k++;
    }
    if(stringread[i] == '\n')
        stringout[k] = '\n';
    else if(stringread[i] == '\0')
        stringout[k] = '\0';
    return(stringout);
}

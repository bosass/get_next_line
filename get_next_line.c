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

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 333

char *get_next_line(int fd)
{
    // static int line;
    // int i;
    // int k;
    // int counted;
    // static char stringout[BUFFER_SIZE + 1];
    char stringread[BUFFER_SIZE + 1];
    ssize_t amountread;

    // i = 0;
    // k = 0;
    // line = 0;
    amountread = read(fd, stringread, BUFFER_SIZE);
    return (stringread);
    // while(stringread[i] != '\0')
    // {
    //     if(line == counted)
    //     {
    //         while(stringread[i] != '\n' && stringread[i] != '\0')
    //         {
    //             stringout[k] = stringread[i];
    //             i++;
    //             k++;
    //         }
    //         stringout[k] = '\n';
    //         line++;
    //         return(stringout);
    //     }
    //     if(stringread[i] == '\n' || stringread[i] == '\0')
    //     {
    //         counted++;
    //         i++;
    //     }
    //     else
    //         i++;
    // }
    // return (NULL);
}
int main()
{
    int fd = open("test.txt", O_RDONLY);
    char *out;
    out = get_next_line(fd);
    printf("%s", out);
    // out = get_next_line(fd);
    // printf("%s", out);
    close(fd);
}
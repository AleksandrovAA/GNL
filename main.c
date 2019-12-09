/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:34:41 by ngale             #+#    #+#             */
/*   Updated: 2019/10/04 14:37:07 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
    int fd1, fd2;
    int ret;
    int i;
    char *line, *line2;

    i = 0;
    if (argc == 2) {
        fd1 = open("graf-monte-kristo.txt", O_RDONLY);
        while ((ret = get_next_line(fd1, &line)) > 0)
        {
            printf("[Return: %d] Line #%d: %s\n", ret, ++i, line);
            free(line);
        }
        printf("[Return: %d] Line #%d: %s\n", ret, i, line);
        if (ret == -1)
            printf("-----------\nError\n");
        else if (ret == 0)
            printf("-----------\nEnd of file\n");
        close(fd1);
    }
    if (argc == 3) {
        fd1 = open(argv[1], O_RDONLY);
        fd2 = open(argv[2], O_RDONLY);
        ret = get_next_line(fd1, &line);
        printf("[Return: %d] Line #%d: %s\n", ret, ++i, line);
        ret = get_next_line(fd2, &line2);
        printf("[Return: %d] Line #%d: %s\n", ret, i, line2);
        ret = get_next_line(fd1, &line);
        printf("[Return: %d] Line #%d: %s\n", ret, ++i, line);
        ret = get_next_line(fd2, &line2);
        printf("[Return: %d] Line #%d: %s\n", ret, i, line2);
        ret = get_next_line(fd1, &line);
        printf("[Return: %d] Line #%d: %s\n", ret, ++i, line);
        ret = get_next_line(fd2, &line2);
        printf("[Return: %d] Line #%d: %s\n", ret, i, line2);
        ret = get_next_line(fd1, &line);
        printf("[Return: %d] Line #%d: %s\n", ret, i, line);
        ret = get_next_line(fd2, &line2);
        printf("[Return: %d] Line #%d: %s\n", ret, i, line2);
        if (ret == -1)
            printf("-----------\nError\n");
        else if (ret == 0)
            printf("-----------\nEnd of file\n");
        close(fd1);
        close(fd2);
    }
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 12:55:14 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/02 12:55:16 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            std::cout << (char)toupper(argv[i][j++]);
        }
        i++;
    }
    std::cout << std::endl;
}
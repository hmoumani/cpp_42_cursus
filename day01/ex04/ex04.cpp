/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:42:37 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 14:42:42 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string     example = "HI THIS IS BRAIN";

    std::string*    examplePtr = &example;
    std::string&    exampleRef = example;

    std::cout << "by ptr : " << *examplePtr << std::endl;
    std::cout << "by ref : " << exampleRef << std::endl;
}

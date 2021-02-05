/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:17:39 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/05 15:17:41 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
    std::cout << "---->running on heap : " << std::endl;
    ponyOnTheHeap();
    std::cout << "instance number : " << Pony::_nbrIns << std::endl;
    std::cout << "*****ending heap" << std::endl;
    std::cout << "---->running on stack : " << std::endl;
    ponyOnTheStack();
    std::cout << "instance number : " << Pony::_nbrIns << std::endl;
    std::cout << "*****ending stack" << std::endl;
    return (0);
}

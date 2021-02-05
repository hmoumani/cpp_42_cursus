/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:17:26 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/05 15:17:30 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


Pony::Pony(std::string name) : _name(name) {
	std::cout << "Pony " << name << " is born" << std::endl;
	Pony::_nbrIns += 1;
}
Pony::~Pony(){
	std::cout << _name << " is dead" << std::endl;
	Pony::_nbrIns -= 1;
}
void Pony::sing() const
{
	std::cout << "La la la la" << std::endl;
}
void Pony::my_name_is() const
{
	std::cout << "my name is : " << this->_name << std::endl;
}

void ponyOnTheHeap()
{
	Pony *pony = new Pony("Celestia");
	std::cout << "instance number : " << Pony::_nbrIns << std::endl;
	pony->my_name_is();
	delete pony;
}
void ponyOnTheStack()
{
	Pony pony("Twilight");
	std::cout << "instance number : " << Pony::_nbrIns << std::endl;
	pony.sing();
}

int Pony::_nbrIns = 0;
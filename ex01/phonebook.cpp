/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:04:18 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/02 15:04:21 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void show_menu(void)
{
	std::cout << "Pick an option:" << std::endl;
	std::cout << "Add:" << std::endl;
	std::cout << "Search:" << std::endl;
	std::cout << "Exit:" << std::endl;
}

std::string str_outout(std::string str)
{
	int len = str.length();
	if (len == 10)
		return str;
	if (len < 10)
	{
		str.append(10 - str.length(), ' ');
		return str;
	}
	if (len > 10)
	{
		return str.substr(0, 9) + '.';
	}
	return NULL;
}

void show_trun_contact(Contact list[], int list_len)
{
	for (int i = 0; i < list_len; i++)
	{
		std::cout << i;
		std::cout << str_outout(list[i].first_name) << "|";
		std::cout << str_outout(list[i].last_name) << "|";
		std::cout << str_outout(list[i].nick_name);
		std::cout << std::endl;
	}
}

int main(int argc, char **argv)
{
    Contact 	list[8];
    int			list_len;
	std::string choice;

	std::cout << "///////////////////////////////////////////" << std::endl;
	std::cout << "////                                   ////" << std::endl;
	std::cout << "////  welcome to my crappy PhoneBook   ////" << std::endl;
	std::cout << "////                                   ////" << std::endl;
	std::cout << "///////////////////////////////////////////" << std::endl;
    while (1)
    {
        show_menu();
		getline(std::cin, choice);

		if ()
    }
}

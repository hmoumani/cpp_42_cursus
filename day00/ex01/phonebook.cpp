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
	std::cout << "**************** MENU ****************" << std::endl;
	std::cout << "Pick an option:" << std::endl;
	std::cout << "ADD:" << std::endl;
	std::cout << "SEARCH:" << std::endl;
	std::cout << "EXIT:" << std::endl;
}

std::string str_output(std::string str)
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
	std::cout << "id" << "|";
	std::cout << str_output("first name") << "|";
	std::cout << str_output("last name") << "|";
	std::cout << str_output("nickname") << "|";
	std::cout << std::endl;
	for (int i = 0; i < list_len; i++)
	{
		std::cout << i << " |";
		std::cout << str_output(list[i].first_name) << "|";
		std::cout << str_output(list[i].last_name) << "|";
		std::cout << str_output(list[i].nick_name) << "|";
		std::cout << std::endl;
	}
}

void	add_contact(Contact list[], int list_len)
{
	list[list_len].add();
}

int		get_int(int list_len)
{
	int my_number = 0;
    std::string input = "";

 	while (true) {
		std::cout << "Please enter a valid number: ";
		std::getline(std::cin, input);
		std::stringstream myStream(input);
		if (myStream >> my_number)
			if (my_number >= 0 && my_number < list_len)
				break;
		std::cout << "Invalid number, please try again" << std::endl;
 	}
 	return my_number;
}

int main()
{
	Contact 	list[8];
	int			list_len;
	std::string choice;
	int			index;

	std::cout << "///////////////////////////////////////////" << std::endl;
	std::cout << "////                                   ////" << std::endl;
	std::cout << "////  welcome to my crappy PhoneBook   ////" << std::endl;
	std::cout << "////                                   ////" << std::endl;
	std::cout << "///////////////////////////////////////////" << std::endl;
	list_len = 0;
	while (1)
	{
		show_menu();
		getline(std::cin, choice);
		if (choice == "ADD")
		{
			if (list_len == 8)
			{
				std::cout << "list is FULL, you can just search" << std::endl;
				continue ;
			}
			add_contact(list, list_len);
			list_len++;
		}
		else if (choice == "SEARCH")
		{
			if (list_len == 0)
			{
				std::cout << "list is empty, add some contact first" << std::endl;
				continue ;
			}
			show_trun_contact(list, list_len);
			index = get_int(list_len);
			list[index].to_string();
		}
		else if (choice == "EXIT")
		{
			return 0;
		}
	}
}

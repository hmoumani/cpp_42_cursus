/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:33:31 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/02 15:33:33 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void    Contact::add(void)
{
    std::cout << "First Name: ";
    getline(std::cin, this->first_name);
    std::cout << "Last Name: ";
    getline(std::cin, this->last_name);
    std::cout << "nickname: ";
    getline(std::cin, this->nick_name);
    std::cout << "login: ";
    getline(std::cin, this->login);
    std::cout << "postal address: ";
    getline(std::cin, this->postal_address);
    std::cout << "email address: ";
    getline(std::cin, this->email_address);
    std::cout << "phone number: ";
    getline(std::cin, this->phone_number);
    std::cout << "birthday date: ";
    getline(std::cin, this->birthday_date);
    std::cout << "favorite meal: ";
    getline(std::cin, this->favorite_meal);
    std::cout << "underwear color: ";
    getline(std::cin, this->underwear_color);
    std::cout << "darkest secret: ";
    getline(std::cin, this->darkest_secret);
}

void    Contact::search(void)
{
    return ;
}
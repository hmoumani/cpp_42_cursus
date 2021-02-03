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
    this->first_name = get_input();
    std::cout << "Last Name: ";
    this->last_name = get_input();
    std::cout << "nickname: ";
    this->nick_name = get_input();
    std::cout << "login: ";
    this->login = get_input();
    std::cout << "postal address: ";
    this->postal_address = get_input();
    std::cout << "email address: ";
    this->email_address = get_input();
    std::cout << "phone number: ";
    this->phone_number = get_input();
    std::cout << "birthday date: ";
    this->birthday_date = get_input();
    std::cout << "favorite meal: ";
    this->favorite_meal = get_input();
    std::cout << "underwear color: ";
    this->underwear_color = get_input();
    std::cout << "darkest secret: ";
    this->darkest_secret = get_input();
    return ;
}

void    Contact::to_string(void)
{
    std::cout << "First Name: ";
    std::cout << this->first_name << std::endl;
    std::cout << "Last Name: ";
    std::cout <<  this->last_name << std::endl;
    std::cout << "nickname: ";
    std::cout <<  this->nick_name << std::endl;
    std::cout << "login: ";
    std::cout <<  this->login << std::endl;
    std::cout << "postal address: ";
    std::cout <<  this->postal_address << std::endl;
    std::cout << "email address: ";
    std::cout <<  this->email_address << std::endl;
    std::cout << "phone number: ";
    std::cout <<  this->phone_number << std::endl;
    std::cout << "birthday date: ";
    std::cout <<  this->birthday_date << std::endl;
    std::cout << "favorite meal: ";
    std::cout <<  this->favorite_meal << std::endl;
    std::cout << "underwear color: ";
    std::cout <<  this->underwear_color << std::endl;
    std::cout << "darkest secret: ";
    std::cout <<  this->darkest_secret << std::endl;
}
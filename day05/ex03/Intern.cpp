/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:07:38 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/06 12:07:40 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}


Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern      &Intern::operator=(Intern const & src)
{
    if (this != &src)
        return *this;
    return *this;
}

Form        *Intern::makeShrubberyCreation(std::string const & target) const
{
    return new ShrubberyCreationForm(target);
}

Form        *Intern::makeRobotomyRequest(std::string const & target) const
{
    return new RobotomyRequestForm(target);
}

Form        *Intern::makePresidentialPardon(std::string const & target) const
{
    return new PresidentialPardonForm(target);
}

Form        *Intern::makeForm(std::string const & name, std::string const & target)
{
    std::string const names[3] = {"presidential pardon", "Robotomy Request", "shrubbery creation"};
    Form* (Intern::*form_values[3])(std::string const &str) const = {&Intern::makeShrubberyCreation, &Intern::makeRobotomyRequest, &Intern::makePresidentialPardon};
    
    for (int i = 0; i < 3; i++)
    {
        if (names[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*(form_values[i]))(target);
        }
    }
    std::cout << "Form Not Found" << std::endl;
    return NULL;
}

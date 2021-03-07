/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:07:31 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/06 12:07:32 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();
        Intern      &operator=(Intern const & src);
        Form        *makeShrubberyCreation(std::string const & target) const;
        Form        *makeRobotomyRequest(std::string const & target) const;
        Form        *makePresidentialPardon(std::string const & target) const;
        Form        *makeForm(std::string const & name, std::string const & target);
};

#endif
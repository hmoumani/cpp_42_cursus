/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:04:02 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/04 17:04:06 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src)
{
    srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("Robotomy Request", 72, 45), _target(target)
{
    srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm   &RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
    Form::operator=(src);
    this->_target = src._target;
    return *this;
}

void                    RobotomyRequestForm::execute(Bureaucrat const & src) const
{
    Form::execute(src);
    std::cout << "Vvvvvvvvvv...Vvvvvv..." << std::endl;
    if (rand() % 2)
        std::cout << _target << "  has been robotomized successfully " << std::endl;
    else
        std::cout << "mission failed" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:13:51 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/03 18:13:52 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}
Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const &name, int  grade) : _name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name)
{
    if (src._grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (src._grade < 1)
        throw Bureaucrat::GradeTooHighException();
    *this = src;
}

std::string     Bureaucrat::getName() const
{
    return this->_name;
}

int         Bureaucrat::getGrade() const
{
    return this->_grade;
}

Bureaucrat      &Bureaucrat::operator=(Bureaucrat const & src)
{
    this->_grade = src._grade;
    return *this;
}

void        Bureaucrat::increment()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void        Bureaucrat::decrement()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & src)
{
    return out << src.getName() << ", bureaucrat grade " << src.getGrade();
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

void        Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void        Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executes " << form.getName() << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << this->getName() << " failed beacuse: " << e.what() << std::endl;
    }
}
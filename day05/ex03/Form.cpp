/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:26:46 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/04 15:26:48 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _is_signed(false), _grade_to_sign(70), _grade_to_exec(20)
{
}

Form::Form(Form const & src) : _name(src._name), _grade_to_sign(src._grade_to_sign), _grade_to_exec(src._grade_to_exec)
{
    *this = src;
}

Form::Form(std::string const & name, int grade_to_sign, int grade_to_exec) : _name(name), _is_signed(false) ,_grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
    if (grade_to_sign < 1 || grade_to_exec < 1)
        throw Form::GradeTooHighException();
    if (grade_to_sign > 150 || grade_to_exec > 150)
        throw Form::GradeTooLowException();
}

Form    &Form::operator=(Form const & src)
{
    this->_is_signed = src._is_signed;
    return *this;
}

Form::~Form()
{}

const char* Form::GradeTooHighException::what() const throw()
{
    return "grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "grade is too low!";
}

const char* Form::FormIsSigned::what() const throw()
{
    return "Form is already signed!";
}

const char* Form::FormIsNotSigned::what() const throw()
{
    return "Form is Not signed!";
}

std::string Form::getName() const
{
    return _name;
}

bool        Form::is_signed() const
{
    return _is_signed;
}

int         Form::getGradeToSign() const
{
    return _grade_to_sign;
}

int         Form::getGradeToExec() const
{
    return _grade_to_exec;
}

std::ostream&	operator<<(std::ostream& out, Form const & src)
{
    return out << "the form called: " << src.getName() << " is " << (src.is_signed() ? "true" : "false") << ", grad to execute is: " << src.getGradeToExec() << ", grade to sign is: " << src.getGradeToSign();
}

void        Form::beSigned(Bureaucrat & src)
{
    if (src.getGrade() > this->_grade_to_sign)
        throw Form::GradeTooLowException();
    if (this->_is_signed)
        throw Form::FormIsSigned();
    this->_is_signed = true;
}

void        Form::execute(Bureaucrat const & src) const
{
    if (not is_signed())
        throw FormIsNotSigned();
    else if (this->getGradeToExec() < src.getGrade())
        throw GradeTooLowException();
}
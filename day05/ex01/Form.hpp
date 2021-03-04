/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:26:52 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/04 15:26:54 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        bool        _is_signed;
        int const   _grade_to_sign;
        int const   _grade_to_exec;
    public:
        Form();
        Form(Form const & src);
        Form(std::string const & name, int grade_to_sign, int grade_to_exec);
        ~Form();
        Form    &operator=(Form const & src);
        std::string getName() const;
        bool        is_signed() const;
        int         getGradeToSign() const;
        int         getGradeToExec() const;
        void        beSigned(Bureaucrat & src);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&	operator<<(std::ostream& out, Form const & src);


#endif

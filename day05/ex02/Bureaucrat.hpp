/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:13:55 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/03 18:13:58 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
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
        Bureaucrat();
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat(std::string const &name, int grade);
        ~Bureaucrat();
        Bureaucrat  &operator=(Bureaucrat const & src);
        std::string getName() const;
        int         getGrade() const;
        void        increment();
        void        decrement();
        void        signForm(Form &form);
        void        executeForm(Form const & form);
    private:
        std::string const _name;
        int               _grade;
    
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & src);

#endif

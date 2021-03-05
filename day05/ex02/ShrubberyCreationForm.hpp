/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:03:40 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/04 17:03:41 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        ShrubberyCreationForm();
        std::string     _target;
    public:
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ShrubberyCreationForm(std::string const & src);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm   &operator=(ShrubberyCreationForm const & src);
        void                    execute(Bureaucrat & src);
};

#endif

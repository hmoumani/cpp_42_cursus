/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:03:46 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/04 17:03:48 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("shrubbery creation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
    Form::operator=(src);
    this->_target = src._target;
    return *this;
}

void                    ShrubberyCreationForm::execute(Bureaucrat const & src) const
{
    Form::execute(src);
    std::ofstream out(this->_target + "_Shrubbery");
    out << 
        "       ****\n"
        "     ********\n"
        "    **  ******\n"
        "     *   ******     ******\n"
        "         ******   *********\n"
        "          ****  *****   ***\n"
        "          ***  ***     **\n"
        "    *************       *\n"
        "  ******************\n"
        " *****   H*****H*******\n"
        " ***     H-___-H  *********\n"
        "  ***    H     H      *******\n"
        "   **    H-___-H        *****\n"
        "     *   H     H         ****\n"
        "         H     H         ***\n"
        "         H-___-H         **\n"
        "         H     H         *\n"
        "         H-___-H\n"
        "         H-___-H\n"
        "         H-___-H\n"
        "         H-___-H\n"
        "         H-___-H\n"
        "         H-___-H\n"
        "         H-___-H\n"
        "         H-___-H\n"
        "         H-___-H\n"
        "         H-___-H\n"
        "\n"
        "         ALOHA!!\n";
        out.close();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:03:57 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/04 17:03:59 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const & src);
    public:
        RobotomyRequestForm(std::string const & target);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm     &operator=(RobotomyRequestForm const & src);
        void                    execute(Bureaucrat const & src) const;
};

#endif
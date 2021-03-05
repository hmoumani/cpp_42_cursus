/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:04:24 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/04 17:04:26 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(PresidentialPardonForm const & src);
        PresidentialPardonForm(std::string const & target);
        ~PresidentialPardonForm();
        PresidentialPardonForm     &operator=(PresidentialPardonForm const & src);
        void                    execute(Bureaucrat const & src) const;
};

#endif

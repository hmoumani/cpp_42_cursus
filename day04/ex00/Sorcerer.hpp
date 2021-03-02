/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:36:13 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/28 10:37:45 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOCERER_HPP
# define SOCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
    private:
        std::string _name;
        std::string _title;
        Sorcerer();
    public:
        Sorcerer(Sorcerer const & src);
        Sorcerer(std::string const & name, std::string const & title);
        ~Sorcerer();
        Sorcerer&   operator=(Sorcerer const & src);
        std::string getName() const;
        std::string getTitle() const;
        void polymorph(Victim const &) const;
};

std::ostream	&operator<<(std::ostream& out_stream, Sorcerer const & src);

#endif

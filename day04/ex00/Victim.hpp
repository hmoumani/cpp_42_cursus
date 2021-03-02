/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:38:05 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/28 10:38:07 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim
{
    protected:
        std::string _name;
    public:
        Victim();
        Victim(std::string const & name);
        Victim(Victim const & src);
        std::string getName() const ;
        virtual ~Victim();
        virtual void getPolymorphed() const;
        Victim&     operator=(Victim const & src);
};

std::ostream	&operator<<(std::ostream& out_stream, Victim const & src);


#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:38:27 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/28 10:38:28 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Victim.hpp"

class Human : public Victim
{
    public:
        Human();
        Human(std::string const & name);
        Human(Human const & src);
        virtual ~Human();
        Human&   operator=(Human const & src);
        virtual void getPolymorphed() const;
};

#endif

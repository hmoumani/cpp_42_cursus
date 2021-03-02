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

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon();
        Peon(std::string const & name);
        Peon(Peon const & src);
        virtual ~Peon();
        Peon&   operator=(Peon const & src);
        virtual void getPolymorphed() const;
};

#endif

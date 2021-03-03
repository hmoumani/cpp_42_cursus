/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:19:59 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:20:00 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &);
        virtual ~Ice();
        Ice    &operator=(Ice const & src);
        Ice* clone() const;
        void use(ICharacter& target);
};

#endif

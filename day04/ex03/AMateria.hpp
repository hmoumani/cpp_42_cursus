/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:19:43 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:19:45 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATRIA_HPP
# define AMATRIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria;

class AMateria
{
    private:
        std::string _type;
        unsigned int _xp;
    public:
        AMateria(std::string const & type);
        AMateria();
        AMateria(AMateria const &);
        virtual ~AMateria();
        AMateria    &operator=(AMateria const & src);
        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif

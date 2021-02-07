/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:50:53 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 15:50:55 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon      *_weapon;
        std::string _name;
    public:
        HumanB();
        HumanB(std::string name);
        HumanB(std::string name, Weapon& wep);
        ~HumanB();
        void    setWeapon(Weapon& weapon);
        void    attack();
};

#endif


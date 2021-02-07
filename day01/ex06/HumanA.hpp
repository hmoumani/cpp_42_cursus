/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:50:35 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 15:50:37 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon&      _weapon;
        std::string _name;
    public:
        HumanA();
        HumanA(std::string name);
        HumanA(std::string name, Weapon& wep);
        ~HumanA();
        void    setWeapon(Weapon& weapon);
        void    attack();
};

#endif

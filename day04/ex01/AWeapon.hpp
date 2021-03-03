/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:13:46 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:13:48 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
class AWeapon
{
    private:
        std::string _name;
		int			_apcost;
        int			_damage;
    public:
        AWeapon();
    	AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & src);
        virtual ~AWeapon();
        std::string const & getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
		AWeapon		&operator=(AWeapon const & src);
};

#endif

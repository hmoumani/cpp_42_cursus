/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:15:09 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:15:11 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"
class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(PowerFist const & src);
        ~PowerFist();
        PowerFist     &operator=(PowerFist const &src);
        void            attack() const;
};

#endif

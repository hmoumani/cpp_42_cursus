/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M4.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 08:52:23 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/03 08:52:25 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef M4_HPP
# define M4_HPP
# include "AWeapon.hpp"

class M4 : public AWeapon
{
    public:
        M4();
        M4(M4 const & src);
        virtual ~M4();
        M4     &operator=(M4 const & src);
        void            attack() const;
};

#endif

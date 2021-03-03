/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Noob.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 08:52:40 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/03 08:52:42 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOOB_HPP
# define NOOB_HPP
# include "Enemy.hpp"

class Noob : public Enemy
{
    public:
        Noob();
        Noob(Noob const & src);
        virtual ~Noob();
        Noob		&operator=(Noob const & src);
        void			takeDamage(int);
};

#endif

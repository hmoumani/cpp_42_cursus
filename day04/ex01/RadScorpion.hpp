/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:15:27 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:15:28 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        RadScorpion(RadScorpion const & src);
        virtual ~RadScorpion();
        RadScorpion		&operator=(RadScorpion const & src);
};

#endif

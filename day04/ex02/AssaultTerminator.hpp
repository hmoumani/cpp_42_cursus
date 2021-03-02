/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:16:28 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:16:30 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
# include <iostream>
class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        AssaultTerminator(AssaultTerminator const &);
        ~AssaultTerminator();
        AssaultTerminator  &operator=(AssaultTerminator const & src);
        void battleCry() const;
        AssaultTerminator* clone() const;
        void rangedAttack() const;
        void meleeAttack() const ;
};

#endif

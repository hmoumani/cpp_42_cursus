/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 12:02:20 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/27 12:02:21 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    SuperTrap();
    ~SuperTrap();
    SuperTrap(std::string const & name);
    SuperTrap(SuperTrap const & src);
    void         rangedAttack(std::string const & target);
    void         meleeAttack(std::string const & target);
    SuperTrap&      operator=(SuperTrap const & src);
};

#endif

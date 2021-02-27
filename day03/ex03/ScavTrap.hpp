/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:54:41 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/26 16:54:46 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
		ScavTrap(std::string const & name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();
		ScavTrap    &operator=(ScavTrap const & src);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
        void challengeNewcomer(std::string const & target);
		std::string getName() const ;
};

#endif

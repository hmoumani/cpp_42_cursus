/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 10:40:59 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/26 10:41:03 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & src);
		~FragTrap();
		FragTrap    &operator=(FragTrap const & src);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void vaulthunter_dot_exe(std::string const & target);
		std::string getName() const ;
};

#endif


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 10:37:54 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/27 10:37:55 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
    NinjaTrap(void);
    NinjaTrap(std::string const & name);
    NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap();
    NinjaTrap    &operator=(NinjaTrap const & src);
    void         ninjaShoebox(ClapTrap const &trap);
    void         ninjaShoebox(ScavTrap const &trap);
    void         ninjaShoebox(FragTrap const &trap);
    void         ninjaShoebox(NinjaTrap const &trap);
    std::string getName() const ;
};

#endif

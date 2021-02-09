/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:39:32 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/05 18:39:35 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE
# include <iostream>

class Zombie
{
    private:
        std::string _name;
        std::string _type;
    public:
        Zombie();
        Zombie(std::string name, std::string type);
        ~Zombie();
        void		announce() const;
		std::string	get_type() const;
		std::string	get_name() const;
		void		set_type(std::string type);
		void		set_name(std::string name);
};

#endif
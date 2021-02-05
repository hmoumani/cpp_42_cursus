/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:17:34 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/05 15:17:35 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY
# define PONY
# include <string>
# include <iostream>

class Pony
{
    private:
        std::string _color;
        int 		_size;
        int 		_weight;
        std::string _name;
        int 		_age;
    public:
		static int	_nbrIns;
        Pony(std::string name);
        ~Pony();
        void sing() const;
        void my_name_is() const;
		static int get_nbrIns();
};
void ponyOnTheHeap();
void ponyOnTheStack();

#endif
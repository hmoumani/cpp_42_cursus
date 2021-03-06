/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:17:12 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:17:13 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    typedef struct s_space_marine
    {
        ISpaceMarine        *content;
        struct s_space_marine *next;
    }               t_space_marine;
    private:
        int				_marines;
        t_space_marine	*_list;
    public:
        Squad();
        Squad(Squad const & src);
        virtual ~Squad();
        Squad   &operator=(Squad const & src);
        int     getCount() const;
        ISpaceMarine *getUnit(int) const;
        int push(ISpaceMarine *);
		void    clear();
};

#endif

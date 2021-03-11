/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:50:55 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/11 16:50:56 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP
# include "Base.hpp"


class B : public Base
{
    public:
        B();
        B(B const & src);
        virtual ~B();
        B & operator=(B const & src);
};

#endif

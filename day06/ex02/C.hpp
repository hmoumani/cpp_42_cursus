/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:51:20 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/11 16:51:21 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP
# include "Base.hpp"

class C : public Base
{
    public:
        C();
        C(C const & src);
        virtual ~C();
        C & operator=(C const & src);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:50:26 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/11 16:50:28 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP
# include "Base.hpp"

class A : public Base
{
    public:
        A();
        A(A const & src);
        virtual ~A();
        A & operator=(A const & src);
};

#endif
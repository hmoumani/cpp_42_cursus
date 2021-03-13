/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:14:01 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/12 18:14:02 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>

template <typename T>
typename     T::iterator easyfind(T & container, int n)
{
    typename T::iterator it;

    it = find (container.begin(), container.end(), n);
    return it;
    
}

#endif

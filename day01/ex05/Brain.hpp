/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:08:22 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 15:08:24 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
# define BRAIN
# include <iostream>
# include <sstream>
# include <string>

class Brain
{
    private:
        int _size;
    public:
        Brain();
        Brain(int _size);
        ~Brain();
        std::string identify() const;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:08:41 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/07 15:08:44 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN
# define HUMAN
# include "Brain.hpp"

class Human
{
    private:
        Brain const _brain;
    public:
        Human();
        ~Human();
        std::string     identify() const;
        const Brain&    getBrain() const;
};

#endif

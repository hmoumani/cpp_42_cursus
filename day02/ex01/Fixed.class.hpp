/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:17:23 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/23 11:17:24 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED
# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _fract = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &fixed);
        Fixed(int const & num);
        Fixed(float const & flt);
        Fixed &operator=(Fixed const &other);
        int		toInt() const;
        float	toFloat() const;
        int		getRawBits(void) const ;
        void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream& out_stream, Fixed const & fixed);

#endif

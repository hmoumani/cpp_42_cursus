/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:17:28 by hmoumani          #+#    #+#             */
/*   Updated: 2021/02/23 11:17:30 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const & num)
{
    std::cout << "Int constructor called" << std::endl;
    _value = num << _fract;
}

Fixed::Fixed(float const & flt)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(flt * (1 << _fract));
}

Fixed   &Fixed::operator=(Fixed const &other)
{
    std::cout << "Assignation operator called " << std::endl;
    if (this != &other)
        this->_value = other._value;
    return *this;
}

int      Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

int		Fixed::toInt() const 
{
	return _value >> _fract;
}

float	Fixed::toFloat() const
{
	return ((float)_value / (1 << _fract));
}

std::ostream&	operator<<(std::ostream& out, Fixed const & fixed)
{
	return out << fixed.toFloat();
}
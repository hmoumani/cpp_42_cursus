/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar_con.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:57:39 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/09 16:57:43 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    to_char_and_int(char *in)
{
    char *end = NULL;
    long result = strtol(in, &end, 10);
    if (in[1] == 0 || in != end)
    {
        if (isprint(static_cast<int>(*in)) && in[1] == 0 && !isnumber(*in))
        {
            std::cout << "char: " << *in << std::endl;
            std::cout << "int: " << static_cast<int>(*in) << std::endl;
            return ;
        }
        else
        {
            if (isprint(static_cast<int>(result)))
                std::cout << "char: " << static_cast<char>(result) << std::endl;
            else
                std::cout << "char: : Non displayable" << std::endl;
            std::cout << "int: " << (result) << std::endl;
            return ;
        }
    }
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
}

void    to_float_and_double(char *in)
{
    long double result;
    try 
    {
        if (in[1] == 0 && !isnumber(static_cast<int>(*in)))
            result = static_cast<long double>(*in);
        else
            result = std::stold(in);
        if ((result) != (result))
            std::cout << "float: nanf" << std::endl;
        else if (result < std::numeric_limits<float>::lowest() && result != 0)
            std::cout << "float: -inff" << std::endl;
        else if (result > std::numeric_limits<float>::max())
            std::cout << "float: +inff" << std::endl;
        else
        {
            if (static_cast<float>(result) == static_cast<int>(result))
                std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
            else
                std::cout << "float: " << static_cast<float>(result) << std::endl;
        }
    }
    catch(std::exception &e)
    {
        std::cout << "float: nanf" << std::endl;
    }
    try
    {
        result = std::stold(in);
        if (result > std::numeric_limits<double>::max())
            std::cout << "double: +inf" << std::endl;
        else if ((result) < std::numeric_limits<double>::lowest())
            std::cout << "double: -inf" << std::endl;
        else
        {
            if (static_cast<double>(result) == static_cast<int>(result))
                std::cout << "double: " << static_cast<double>(result) << ".0" << std::endl;
            else
                std::cout << "double: " << static_cast<double>(result) << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "double: nanf" << std::endl;
    }
}

void    redirect(char *in)
{
    to_char_and_int(in);
    to_float_and_double(in);
}

int     ft_error(std::string  const  str)
{
    std::cout << str << std::endl;
    return 1;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (ft_error("Error: Usage ./convert ARG"));
    redirect(argv[1]);
    return (0);
}

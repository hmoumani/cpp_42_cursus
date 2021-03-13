/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:15:01 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/13 12:15:03 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    std::cout << "************************" << std::endl;
   { 
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "************************" << std::endl;
    {
        std::srand(unsigned(std::time(nullptr)));
        std::vector<int> v(10000);
        std::generate(v.begin(), v.end(), std::rand);
        Span sp = Span(10000);
        sp.addNumber(v.begin(), v.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "************************" << std::endl;
    {
        Span sp = Span(10000);
        sp.addNumber(50);
        sp.addNumber(0);
        sp.addNumber(49);
        sp.addNumber(30);
        sp.addNumber(10);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "************************" << std::endl;
    {
        Span sp = Span(10);
        std::vector<int> vec;
        for (int i = 1; i < 6; i++)
            vec.push_back(i * 10);
        sp.addNumber(vec.begin(), vec.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "************************" << std::endl;
}

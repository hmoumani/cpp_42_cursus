/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:01:10 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/11 17:01:11 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void);
void identify_from_pointer(Base * p);
void identify_from_reference(Base & p);

int main()
{
    srand(time(NULL));
    Base *inst = generate();
    identify_from_pointer(inst);
    identify_from_reference(*inst);
}
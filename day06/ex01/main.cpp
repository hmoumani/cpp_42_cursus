/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:40:04 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/11 16:40:06 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"


int main(void) {

    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        void *vd = serialize();
        Data *data = deserialize(vd);
        std::cout << "str1: " << data->str1 << std::endl;
        std::cout << "n:    " << data->num << std::endl;
        std::cout << "str2: " << data->str2 << std::endl;
        std::cout << "*********************" << std::endl;
        delete data;
    }


    return (0);
}

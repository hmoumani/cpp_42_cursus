/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:21:24 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:21:26 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_list[4];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(MateriaSource const & src);
        MateriaSource   &operator=(MateriaSource const & src);
        void learnMateria(AMateria *);
        AMateria* createMateria(std::string const & type);
};

#endif

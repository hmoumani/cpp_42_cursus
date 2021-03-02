/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:14:23 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/02 15:14:28 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy
{
    private:
        int         _hp;
        std::string _type;
    public:
        Enemy();
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const & src);
        virtual ~Enemy();
        Enemy   &operator=(Enemy const & src);
        std::string const & getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};

#endif

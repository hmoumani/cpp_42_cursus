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
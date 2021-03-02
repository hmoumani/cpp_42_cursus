#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const & src)
{
    *this = src;
}

Enemy   &Enemy::operator=(Enemy const & src)
{
    _type = src._type;
    _hp = src._hp;
    return *this;
}

std::string const & Enemy::getType() const
{
    return this->_type;
}

int Enemy::getHP() const
{
    return this->_hp;
}

void Enemy::takeDamage(int damage)
{
    if (damage > 0)
    {
        _hp -= damage;
        if (_hp < 0)
            _hp = 0;
    }
}
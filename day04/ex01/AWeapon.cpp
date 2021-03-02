#include "AWeapon.hpp"

AWeapon::AWeapon() : _name(""), _apcost(0), _damage(0)
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const & src)
{
    *this = src;
}

AWeapon::~AWeapon()
{
}

AWeapon		&AWeapon::operator=(AWeapon const & src)
{
    _name = src._name;
    _apcost = src._apcost;
    _damage = src._damage;
    return *this;
}

std::string const & AWeapon::getName() const
{
    return this->_name;
}

int AWeapon::getAPCost() const
{
    return this->_apcost;
}

int AWeapon::getDamage() const
{
    return this->_damage;
}


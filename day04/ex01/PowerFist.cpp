#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const & src)
{
    *this = src;
}

PowerFist::~PowerFist()
{
}

void            PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist&    PowerFist::operator=(PowerFist const & weapon) {
    AWeapon* awp = this;
    *awp = weapon;
    return *this;
}
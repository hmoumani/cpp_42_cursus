#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}


PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
    *this = src;
}

PlasmaRifle::~PlasmaRifle()
{
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle&    PlasmaRifle::operator=(PlasmaRifle const & weapon)
{
    AWeapon* awp = this;
    *awp = weapon;
    return *this;
}
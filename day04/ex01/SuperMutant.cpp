#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
    *this = src;
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void        SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}

SuperMutant&    SuperMutant::operator=(SuperMutant const & super) {
    Enemy* enemy = this;
    *enemy = super;
    return *this;
}
#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src)
{
    *this = src;
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&    RadScorpion::operator=(RadScorpion const & rads) {
    Enemy* enemy = this;
    *enemy = rads;
    return *this;
}
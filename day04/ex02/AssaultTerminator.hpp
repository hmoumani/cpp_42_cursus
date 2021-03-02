#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
# include <iostream>
class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        AssaultTerminator(AssaultTerminator const & src);
        ~AssaultTerminator();
        AssaultTerminator  &operator=(AssaultTerminator const & src);
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const ;
};

#endif
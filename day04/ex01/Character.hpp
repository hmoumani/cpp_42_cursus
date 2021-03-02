#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"
class Character
{
    private:
        std::string	_name;
        int			_ap;
		AWeapon		*_wp;
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		virtual ~Character();
		Character	&operator=(Character const & src);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const & getName() const;
		AWeapon		*getWeapon() const;
		int			getAp() const;
};

std::ostream&       operator<<(std::ostream& out, Character const & character);
#endif
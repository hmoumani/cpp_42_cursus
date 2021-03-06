/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:51:38 by hmoumani          #+#    #+#             */
/*   Updated: 2021/03/13 14:51:39 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
    
public:
    MutantStack(){};
    MutantStack(MutantStack const & src){*this = src;};
    ~MutantStack(){};
    MutantStack &operator=(MutantStack const & src)
    {
        std::stack<T>::operator=(src);
        return *this;
    }
    
    typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin(){ return this->c.begin(); };
    iterator end(){ return this->c.end(); };
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
    reverse_iterator rbegin(){return this->c.rbegin();};
    reverse_iterator rend(){return this->c.rend();};
    const_reverse_iterator rbegin() const {return this->c.rbegin();};
    const_reverse_iterator rend() const {return this->c.rend();};
};

#endif

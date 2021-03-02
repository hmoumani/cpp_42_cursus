# include "Squad.hpp"

Squad::Squad() : _marines(0), _list(NULL)

{
    
}
Squad::~Squad()
{
    this->clear();
}
Squad::Squad(Squad const & src)
{
    *this = src;
}

int     Squad::getCount() const
{
    return this->_marines;
}

ISpaceMarine *Squad::getUnit(int n) const
{
    int i = 0;
    t_space_marine  *elem;
    if (n > this->getCount() || n < 0)
        return NULL;
    elem = this->_list;
    while (i < n && elem)
    {
        elem = elem->next;
        i++;
    }
    if (!elem)
        return NULL;
    return elem->content;
}

int         Squad::push(ISpaceMarine *marine)
{
    t_space_marine *elem;

    if (!marine)
        return -1;
    if (!this->_list)
    {
        this->_list = new t_space_marine;
        this->_list->content = marine;
        this->_list->next = NULL;
        this->_marines++;
        return _marines;
    }
    elem = this->_list;
    while (elem->next)
    {
        if (elem->content == marine)
            return -1;
        elem = elem->next;
    }
    elem->next = new t_space_marine;
    elem->next->content = marine;
    elem->next->next = NULL;
    this->_marines++;
    return this->_marines;
}

Squad&          Squad::operator=(Squad const & squad) {
    clear();
    if (squad._list)
        _list = new t_space_marine;
    _marines = squad._marines;
    t_space_marine  *iter = squad._list;
    t_space_marine  *tmp = _list;
    while (iter) {
        if (iter != squad._list) {
            tmp->next = new t_space_marine;
            tmp = tmp->next;
        }
        tmp->content = iter->content->clone();
        tmp->next = NULL;
        iter = iter->next;
    }
    return *this;
}

void    Squad::clear() {
    t_space_marine* nextUnit;

    while (_list != NULL) {
        nextUnit = _list->next;
        if (_list->content != NULL)
            delete _list->content;
        delete _list;
        _list = nextUnit;
    }
}
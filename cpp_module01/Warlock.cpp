#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& other)
	: _name(other._name), _title(other._title)
{
}

Warlock& Warlock::operator=(const Warlock& other)
{
	if (this != &other) {
		_name = other._name;
		_title = other._title;
	}
	return (*this);
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const
{
	return (_name);
}

const std::string& Warlock::getTitle() const
{
	return (_title);
}

void Warlock::setTitle(const std::string& title)
{
	_title = title;
}

void	Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
	if (spell)
		if (_SpellBook.find(spell->getName()) == _SpellBook.end())
			_SpellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spell)
{
	if (_SpellBook.find(spell) != _SpellBook.end())
		_SpellBook.erase(_SpellBook.find(spell));
}

void Warlock::launchSpell(std::string spell, ATarget& target)
{
	if (_SpellBook.find(spell) != _SpellBook.end())
		_SpellBook[spell]->launch(target);
}

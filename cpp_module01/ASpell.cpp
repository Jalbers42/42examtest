#include "ASpell.hpp"

// ASpell::ASpell() {}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
{
}

ASpell::ASpell(const ASpell& other)
	: _name(other._name), _effects(other._effects)
{
}

ASpell& ASpell::operator=(const ASpell& other)
{
	if (this != &other) {
		_name = other._name;
		_effects = other._effects;
	}
	return (*this);
}

ASpell::~ASpell()
{
}

std::string ASpell::getName() const
{
	return (_name);
}

std::string ASpell::getEffects() const
{
	return (_effects);
}

// add const ?
void ASpell::launch(const ATarget& target)
{
	target.getHitBySpell(*this);
}

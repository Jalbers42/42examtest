#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
	: ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::Fwoosh(const Fwoosh& other)
	: ASpell("Fwoosh", "fwooshed")
{
	(void) other;
}

Fwoosh& Fwoosh::operator=(const Fwoosh& other)
{
	(void) other;
	return (*this);
}

Fwoosh::~Fwoosh()
{
}

ASpell* Fwoosh::clone() const
{
	return (new Fwoosh());
}

#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell {
    private:
        Fwoosh(const Fwoosh& other);
    	Fwoosh& operator=(const Fwoosh& other);

    public:
	Fwoosh();
    	~Fwoosh();
    	ASpell* clone() const;
};

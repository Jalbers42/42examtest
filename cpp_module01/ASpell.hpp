#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    private:
        std::string _name;
        std::string _effects;

    public:
	// ASpell();
	ASpell(std::string name, std::string effects);
	ASpell(const ASpell& other);
    	ASpell& operator=(const ASpell& other);
    	virtual ~ASpell();
    	std::string getName() const;
    	std::string getEffects() const;
    	virtual ASpell* clone() const = 0;
    	// add const?
    	void launch(const ATarget& target);

};

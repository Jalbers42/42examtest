#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    private:
        std::string _type;

    public:
	// ATarget();
	ATarget(std::string type);
	ATarget(const ATarget& other);
    	ATarget& operator=(const ATarget& other);
    	virtual ~ATarget();
    	const std::string& getType() const;
    	virtual ATarget* clone() const = 0;
    	void getHitBySpell(const ASpell& spell) const;

};

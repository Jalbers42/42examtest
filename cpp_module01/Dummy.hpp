#pragma once

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget {
    private:
        Dummy(const Dummy& other);
    	Dummy& operator=(const Dummy& other);

    public:
	Dummy();
    	~Dummy();
    	ATarget* clone() const;
};

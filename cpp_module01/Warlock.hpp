#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"

class Warlock {
    private:
        std::string _name;
        std::string _title;
        std::map<std::string, ASpell*> _SpellBook;
        Warlock(const Warlock& other);
    	Warlock& operator=(const Warlock& other);
	Warlock();

    public:
    	Warlock(const std::string& name, const std::string& title);
    	~Warlock();
    	const std::string& getName() const;
    	const std::string& getTitle() const;
    	void setTitle(const std::string& title);
    	void introduce() const;
	void learnSpell(ASpell* spell);
	void forgetSpell(std::string spell);
	void launchSpell(std::string spell, ATarget& target);
};

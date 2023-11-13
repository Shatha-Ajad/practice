#include <iostream>
#include <string>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"

class Warlock{
	private: 
		std::string _name;
		std::string _title;
		std::map<std::string, ASpell*> spells;
		Warlock();
		Warlock (const Warlock &copy);
		const Warlock &operator=(const Warlock &copy);
	public:
		~Warlock();
		Warlock (const std::string &name, const std::string &title);
		const std::string &getName() const;
		const std::string &getTitle() const;
		void introduce() const;
		void setTitle (const std::string &title);
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, const ATarget &target);
};
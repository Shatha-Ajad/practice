#include <iostream>
#include <string>
#include "ASpell.hpp"
class ASpell;
class ATarget{
	private: 
		std::string _title;

	public:
		ATarget();
		ATarget (const ATarget &copy);
		const ATarget &operator=(const ATarget &copy);
		virtual ~ATarget();
		ATarget (const std::string &title);
		const std::string &getTitle() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell (const ASpell &spell) const;
};
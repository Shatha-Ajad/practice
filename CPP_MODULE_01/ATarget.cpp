#include "ATarget.hpp"

ATarget::ATarget(){}
ATarget::ATarget (const ATarget &copy){
    *this = copy;
}
const ATarget &ATarget::operator=(const ATarget &copy){
    _type = copy._type;
    return *this;
}

ATarget::~ATarget(){}

ATarget::ATarget (const std::string &type){
    _type = type;
}
const std::string &ATarget::getType() const{
    return _type;
}

void ATarget::launch (const ASpell &spell) const{
	std::cout << _type << " has been " << spell.getEffects() << "!\n";
}
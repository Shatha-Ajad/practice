#include "ASpell.hpp"

ASpell::ASpell(){}
ASpell::ASpell (const ASpell &copy){
    *this = copy;
}
const ASpell &ASpell::operator=(const ASpell &copy){
    _name = copy._name;
    _effects = copy._effects;
    return *this;
}

ASpell::~ASpell(){}

ASpell::ASpell (const std::string &name, const std::string &effects){
    _name = name;
    _effects = effects;
}
const std::string &ASpell::getName() const{
    return _name;
}
const std::string &ASpell::getEffects() const{
    return _effects;
}

void ASpell::launch (const ATarget &target) const{
	target.getHitBySpell(*this);
}
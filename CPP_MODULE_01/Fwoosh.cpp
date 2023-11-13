#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwoooshed"){}
Fwoosh::~Fwoosh(){}
ASpell * Fwoosh::clone() const{
    return (new(Fwoosh));
}

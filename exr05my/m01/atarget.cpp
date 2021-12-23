#include "atarget.hpp"

ATarget::ATarget() : _type() {}

ATarget::ATarget(std::string const &type) : _type(type) {}

ATarget::ATarget(ATarget const &other) : _type(other.getType()) {}

ATarget::~ATarget() {}

ATarget	&ATarget::operator=(ATarget const &other)
{
	this->_type = other.getType();
	return (*this);
}

std::string const	&ATarget::getType(void) const
{
	return (this->_type);
}

void	ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->getType() << " has been " << spell.getEffects() << "!\n";
}
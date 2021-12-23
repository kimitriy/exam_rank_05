#include "aspell.hpp"

ASpell::ASpell() : _name(), _effects() {}

ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name), _effects(effects) {}

ASpell::ASpell(ASpell const &other) : _name(other.getName()), _effects(other.getEffects()) {}

ASpell::~ASpell() {}

ASpell	&ASpell::operator=(ASpell const &other)
{
	this->_name = other.getName();
	this->_effects = other.getEffects();
	return (*this);
}

std::string const	&ASpell::getName(void) const
{
	return (this->_name);
}

std::string const	&ASpell::getEffects(void) const
{
	return (this->_effects);
}

void	ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}
#include "warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
	: _name(name), _title(title)
{
	std::cout << this->getName() << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!\n";
}

std::string const	&Warlock::getName(void) const
{
	return (this->_name);
}

std::string const	&Warlock::getTitle(void) const
{
	return (this->_title);
}

void	Warlock::setTitle(std::string const &title)
{
	this->_title = title;
}

void	Warlock::introduce(void) const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!\n";
}

void	Warlock::learnSpell(ASpell *spell)
{
	this->_spellBook.learnSpell(spell); //m02
}

void	Warlock::forgetSpell(std::string const &spellName)
{
	this->_spellBook.forgetSpell(spellName); //m02
}

void	Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
	ASpell	*spell = this->_spellBook.createSpell(spellName); //m02
	if (spell)
		spell->launch(target);
}
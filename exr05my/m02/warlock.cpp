#include "warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
	: _name(name), _title(title)
{
	std::cout << this->getName() << ": This looks like another boring day.\n";
}

//m01/////////////////////////////////////////////////////////////
Warlock::~Warlock()
{
	std::cout << this->getName() << ": My job here is done!\n";
	
	std::vector<ASpell *>::iterator ite = this->_spells.end();
	for (std::vector<ASpell *>::iterator it = this->_spells.begin(); it != ite; ++it)
		delete *it;
	this->_spells.clear();
}

//m02/////////////////////////////////////////////////////////////
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

//m01/////////////////////////////////////////////////////////////
void	Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		std::vector<ASpell *>::iterator ite = this->_spells.end();
		for (std::vector<ASpell *>::iterator it = this->_spells.begin(); it != ite; ++it)
			if ((*it)->getName() == spell->getName())
				return ;
		this->_spells.push_back(spell->clone());
	}
}

void	Warlock::forgetSpell(std::string const &spellName)
{
	std::vector<ASpell *>::iterator ite = this->_spells.end();
	for (std::vector<ASpell *>::iterator it = this->_spells.begin(); it != ite; ++it)
	{
		if ((*it)->getName() == spellName)
		{
			delete *it;
			it = this->_spells.erase(it);
		}
	}
}

void	Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
	std::vector<ASpell *>::iterator ite = this->_spells.end();
	for (std::vector<ASpell *>::iterator it = this->_spells.begin(); it != ite; ++it)
		if ((*it)->getName() == spellName)
		{
			(*it)->launch(target);
			return ;
		}	
}

//m02/////////////////////////////////////////////////////////////
void	Warlock::learnSpell(ASpell *spell)
{
	this->_spellBook.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string const &spellName)
{
	this->_spellBook.forgetSpell(spellName);
}

void	Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
	ASpell	*spell = this->_spellBook.createSpell(spellName);
	if (spell)
		spell->launch(target);
}
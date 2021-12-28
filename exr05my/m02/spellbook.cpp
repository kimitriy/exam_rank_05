#include "spellbook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
	std::vector<ASpell *>::iterator ite = this->_spells.end();
	for (std::vector<ASpell *>::iterator it = this->_spells.begin(); it != ite; ++it)
		delete *it;
	this->_spells.clear();
}

void	SpellBook::learnSpell(ASpell *spell)
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

void	SpellBook::forgetSpell(std::string const &spellName)
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

ASpell	*SpellBook::createSpell(std::string const &spellName)
{
	std::vector<ASpell *>::iterator ite = this->_spells.end();
	for (std::vector<ASpell *>::iterator it = this->_spells.begin(); it != ite; ++it)
		if ((*it)->getName() == spellName)
			return (*it);
	return (nullptr);
}
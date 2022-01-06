#include "fireball.hpp"

//"Fireball", "burnt to a crisp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball() {}

ASpell	*Fireball::clone(void) const
{
	return (new Fireball(*this));
}
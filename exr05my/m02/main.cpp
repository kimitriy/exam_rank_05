#include "warlock.hpp"
#include "fwoosh.hpp"
#include "dummy.hpp"
#include "brickwall.hpp"
#include "fireball.hpp"
#include "polymorph.hpp"
#include "targetgenerator.hpp"

int main()
{
	Warlock	richard("Richard", "the Titled");

	Dummy	bob;
	Fwoosh	*fwoosh = new Fwoosh();

	richard.learnSpell(fwoosh);

	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", bob);

	delete fwoosh;
}

int main()
{
	Warlock	richard("Richard", "foo");
	richard.setTitle("Hello, I'm Richard the Warlock!");
	BrickWall model1;

	Polymorph	*polymorph = new Polymorph();
	TargetGenerator	tarGen;

	tarGen.learnTargetType(&model1);
	richard.learnSpell(polymorph);

	Fireball	*fireball = new Fireball();

	richard.learnSpell(fireball);

	ATarget	*wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

	richard.introduce();
	richard.launchSpell("Polymorph", *wall);
	richard.launchSpell("Fireball", *wall);

	delete polymorph;
	delete fireball;
}
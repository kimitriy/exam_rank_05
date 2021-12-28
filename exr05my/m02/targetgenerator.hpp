#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <vector>
# include "atarget.hpp"

class TargetGenerator
{
private:
	std::vector<ATarget *> _types;
public:
	TargetGenerator();
	virtual	~TargetGenerator();

	void	learnTargetType(ATarget *type);
	void	forgetTargetType(std::string const &name);
	ATarget	*createTarget(std::string const &name);
};

#endif
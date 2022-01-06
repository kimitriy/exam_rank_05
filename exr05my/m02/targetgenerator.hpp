#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <vector>
# include "atarget.hpp"

class	TargetGenerator
{
	private:
		std::vector<ATarget *>	_types;

		TargetGenerator(TargetGenerator const &other);
		TargetGenerator	&operator=(TargetGenerator const &other);
	public:
		TargetGenerator();
		virtual	~TargetGenerator();

		void	learnTargetType(ATarget *type);
		void	forgetTargetType(std::string const &typeName);
		ATarget	*createTarget(std::string const &typeName);
};

#endif
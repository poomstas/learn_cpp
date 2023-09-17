#ifndef ENGINE_H // ##########################
#define ENGINE_H // ##########################

#include <string>

class Engine
{
	private:
		std::string enginesize;

	public:

		Engine ();

		Engine (std::string);

		void setSize(std::string);

		std::string getSize();

};

#endif /* ENGINE_H */
// Using all caps with the _H is a naming convention. It is also customary to put a comment after the #endif statement with the filename.
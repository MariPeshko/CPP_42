#include "Zombie.hpp"

// This function creates a zombie, names it,
// and makes it announce itself.
void randomChump( std::string name )
{
    Zombie Chump(name);
    Chump.announce();
}


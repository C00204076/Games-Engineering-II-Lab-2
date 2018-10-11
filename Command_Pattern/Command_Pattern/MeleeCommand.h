// Implementation of a Cross Pattern
// C00204076
// Brandon Seah-Dempssey
// Started at 10:17 26 September 2018
// Finished at
// Time taken:
// Known bugs: 

#ifndef MELEECOMMAND_H
#define MELEECOMMAND_H

#include "Command.h"

#include <iostream>

using namespace std;

//
class MeleeCommand : public Command
{
public:
	virtual void execute()
	{
		melee();
	}

	void melee()
	{
		cout << "Melee!" << endl;
	}
};

#endif // !MELEECOMMAND_H

// Implementation of a Cross Pattern
// C00204076
// Brandon Seah-Dempssey
// Started at 10:17 26 September 2018
// Finished at
// Time taken:
// Known bugs: 

#ifndef FIRECOMMAND_H
#define FIRECOMMAND_H

#include "Command.h"

#include <iostream>

using namespace std;

//
class FireCommand : public Command
{
public:
	virtual void execute()
	{
		fire();
	}

	void fire()
	{
		cout << "Fired!" << endl;
	}
};

#endif // !FIRECOMMAND_H
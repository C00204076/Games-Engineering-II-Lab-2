// Implementation of a Cross Pattern
// C00204076
// Brandon Seah-Dempssey
// Started at 10:17 26 September 2018
// Finished at
// Time taken:
// Known bugs: 

#ifndef CROUCHCOMMAND_H
#define CROUCHCOMMAND_H

#include "Command.h"

#include <iostream>

using namespace std;

//
class CrouchCommand : public Command
{
public:
	virtual void execute()
	{
		crouch();
	}

	void crouch()
	{
		cout << "Crouched!" << endl;
	}
};

#endif // !CROUCHCOMMAND_H
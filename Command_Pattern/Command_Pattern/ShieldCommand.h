// Implementation of a Cross Pattern
// C00204076
// Brandon Seah-Dempssey
// Started at 10:17 26 September 2018
// Finished at
// Time taken:
// Known bugs: 

#include "Command.h"

#include <iostream>

using namespace std;

//
class ShieldCommand : public Command
{
public:
	virtual void execute()
	{
		shield();
	}

	void shield()
	{
		cout << "Shielded!" << endl;
	}
};
// Implementation of a Cross Pattern
// C00204076
// Brandon Seah-Dempssey
// Started at 10:17 26 September 2018
// Finished at
// Time taken:
// Known bugs: 

#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include "Command.h"

#include<iostream>
#include <vector>

using namespace std;

class MacroCommand : public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command*);
	virtual void remove(Command*);
	virtual void execute();

private:
	vector<Command*>* commands;
};

#endif // !MACROCOMMAND_H

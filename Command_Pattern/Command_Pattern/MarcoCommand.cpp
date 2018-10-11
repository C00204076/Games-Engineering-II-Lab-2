// Implementation of a Cross Pattern
// C00204076
// Brandon Seah-Dempssey
// Started at 10:17 26 September 2018
// Finished at
// Time taken:
// Known bugs: 

#include "MarcoCommand.h"

//
MacroCommand::MacroCommand()
{

}

//
MacroCommand::~MacroCommand()
{

}

//
void MacroCommand::execute()
{
	for (int i =0; i < commands->size(); i++)
	{
		Command *c;
		c->execute();
	}

}

//
void MacroCommand::add(Command *c)
{
	commands->push_back(c);
}

//
void MacroCommand::remove(Command *c)
{
	//commands->erase(c);
}
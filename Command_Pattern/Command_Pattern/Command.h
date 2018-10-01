// Implementation of a Cross Pattern
// C00204076
// Brandon Seah-Dempssey
// Started at 10:17 26 September 2018
// Finished at
// Time taken:
// Known bugs: 

//
class Command
{
public:
	virtual ~Command()
	{

	}

	virtual void execute() = 0;
	virtual void undo() = 0;

protected:
	Command()
	{

	}
};
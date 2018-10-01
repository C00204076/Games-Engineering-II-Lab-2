// Implementation of a Cross Pattern
// C00204076
// Brandon Seah-Dempssey
// Started at 10:38 26 September 2018
// Finished at
// Time taken:
// Known bugs: 

#include "Command.h"
#include <Windows.h>

//
class InputHandler
{
public:
	void handleInput();

private:
	Command* buttonSpace_; // Jump
	Command* buttonShift_; // Crouch
	Command* buttonE_; // Melee
	Command* buttonQ_; // Shield
	Command* buttonR_; // Fire
 };
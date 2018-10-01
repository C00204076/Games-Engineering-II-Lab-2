// Implementation of a Cross Pattern
// C00204076
// Brandon Seah-Dempssey
// Started at 10:17 26 September 2018
// Finished at
// Time taken:
// Known bugs: 

#include "InputHandler.h"

//
void InputHandler::handleInput()
{
	// Space Key
	if (GetKeyState(VK_SPACE))
	{
		buttonSpace_->execute();
	}

	// Shift Key
	if (GetKeyState(VK_SHIFT))
	{
		buttonShift_->execute();
	}

	// E Key
	if (GetKeyState(0x45))
	{
		buttonE_->execute();
	}

	// Q Key
	if (GetKeyState(0x51))
	{
		buttonQ_->execute();
	}

	// R Key
	if (GetKeyState(0x52))
	{
		buttonR_->execute();
	}
}
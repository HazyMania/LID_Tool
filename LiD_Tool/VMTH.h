#pragma once

#include <Windows.h>
#include <cstdint>

namespace VMTH
{
	//===========================================================================//
	//==== CountVMTFunctions - Count number of functions inside VMT =============//
	//===========================================================================//

	uint64_t CountVMTFunctions(uint64_t* pdwVMT);

	//===========================================================================//
	//==== SwapWMT - Copy VMT to a new one and then change VMT class pointer ====//
	//===========================================================================//

	bool SwapVMT(uint64_t** ppdwClassBase);

	//===========================================================================//
	//==== ReHookVMT - Update VMT class pointer to an already swapped VMT =======//
	//===========================================================================//

	bool ReHookVMT(uint64_t** ppdwClassBase, PDWORD dwNewVMT);

	//===========================================================================//
	//==== HookVMTFuncion - Hook a function inside VMT ==========================//
	//===========================================================================//

	bool HookVMTFunction(uint64_t** ppdwClassBase, uint64_t* dwNewFunction, uint64_t uiFunctionIndex);
}
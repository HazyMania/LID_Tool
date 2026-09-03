#pragma once

//#include <iostream>

#include "VMTH.h"

namespace VMTH
{
	//===========================================================================//
	//==== CountVMTFunctions - Count number of functions inside VMT =============//
	//===========================================================================//

	uint64_t CountVMTFunctions(uint64_t* pdwVMT)
	{
		uint64_t dwIndex = 0;

		for (dwIndex = 0; pdwVMT[dwIndex]; dwIndex++)
		{
			if (IsBadCodePtr((FARPROC)pdwVMT[dwIndex]))
			{
				break;
			}
		}

		return dwIndex;
	}

	//===========================================================================//
	//==== SwapWMT - Copy VMT to a new one and then change VMT class pointer ====//
	//===========================================================================//

	bool SwapVMT(uint64_t** ppdwClassBase)
	{
		uint64_t* pdwOldVMT = *ppdwClassBase;

		///std::cout << "Original class base: " << pdwOldVMT << std::endl;

		// get vmt size
		uint64_t dwVMTSize = CountVMTFunctions(pdwOldVMT);
		if (!dwVMTSize) { return false; }

		// allocate memory for new vmt
		uint64_t* pdwNewVMT = new uint64_t[dwVMTSize];
		if (!pdwNewVMT) { return false; }

		// copy old vmt into new vmt
		memcpy(pdwNewVMT, pdwOldVMT, sizeof(uint64_t) * dwVMTSize);

		///std::cout << "New class base: " << pdwNewVMT << std::endl;

		// update pointer
		*ppdwClassBase = pdwNewVMT;

		return true;
	}

	//===========================================================================//
	//==== ReHookVMT - Update VMT class pointer to an already swapped VMT =======//
	//===========================================================================//

	bool ReHookVMT(uint64_t** ppdwClassBase, uint64_t* dwNewVMT)
	{
		if
			(
			*ppdwClassBase
			&&  dwNewVMT
			)
		{
			*ppdwClassBase = dwNewVMT;
			return true;
		}

		return false;
	}

	//===========================================================================//
	//==== HookVMTFuncion - Hook a function inside VMT ==========================//
	//===========================================================================//

	bool HookVMTFunction(uint64_t** ppdwClassBase, uint64_t* dwNewFunction, uint64_t uiFunctionIndex)
	{
		uint64_t* pdwVMT = *ppdwClassBase;

		if
			(
			pdwVMT
			&&  uiFunctionIndex <= CountVMTFunctions(pdwVMT)
			&& uiFunctionIndex >= 0
			)
		{
			///std::cout << "Original Function: " << pdwVMT[uiFunctionIndex] << std::endl;
			pdwVMT[uiFunctionIndex] = (uint64_t)dwNewFunction;
			///std::cout << "Hooked Function: " << pdwVMT[uiFunctionIndex] << std::endl;
			return true;
		}

		return false;
	}
}
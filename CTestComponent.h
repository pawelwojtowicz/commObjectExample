#pragma once
#include "IComponent.h"

class CTestComponent : public IComponent 
{
private:
	bool Initialize() override;
	void Shutdown() override;
};

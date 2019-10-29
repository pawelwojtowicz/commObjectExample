#include <stdio.h>
#include "CTestComponent.h"

bool CTestComponent::Initialize()
{
	printf("This is an intialize\n");
	return false;
}

void CTestComponent::Shutdown()
{
	printf("This is a shutdown\n");
}

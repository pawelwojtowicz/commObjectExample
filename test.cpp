
#include "IComponent.h"

#include "CTestComponent.h"

extern "C"
{


IComponent* createInstance()
{
	return new CTestComponent();
}

}







#include <dlfcn.h>
#include "IComponent.h"
#include <stdio.h>

int main()
{
	void* fileHandle = dlopen("./libtestLib.so", RTLD_LAZY);

	IComponent* (*componentGetter)();

	componentGetter = reinterpret_cast<IComponent* (*)()> (dlsym( fileHandle, "createInstance") );

	IComponent* component = (*componentGetter)();

	component->Initialize();
	component->Shutdown();


	return 0;
}

#pragma once

class IComponent {

public:
	IComponent() {};
	virtual ~IComponent() {};

public:
	virtual bool Initialize() = 0;
	virtual void Shutdown() = 0;

private:
	IComponent(const IComponent&);
	IComponent& operator=( const IComponent&);

};

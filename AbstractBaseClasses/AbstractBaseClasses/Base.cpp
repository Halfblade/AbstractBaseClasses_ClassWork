#include "Base.h"
#include "Helper.h"
#include <iostream>

Helper h;
void Base::DisplayRecord()
{
	
}

void Base::SetName(const char* name)
{
	h.CopyString(name, _name);
}



Base::~Base()
{
	CleanUp();
}


Base::Base()
{
	
}


Base& Base::operator=(const Base& other)
{
	if (this != &other)
	{
		h.CopyString(other._name, _name);
	}
	return *this;
}

void Base::CleanUp()
{
	delete[] _name;
	_name = nullptr;
}

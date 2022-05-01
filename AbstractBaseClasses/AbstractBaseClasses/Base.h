#pragma once
class Base
{

private:

	char* _name;
	

public:
	virtual void DisplayRecord() = 0;
	~Base();
	Base();
	Base& operator=(const Base& other);
	

	const char* GetName() { return _name; }
	void SetName(const char* name);
	void CleanUp();


};


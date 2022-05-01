#pragma once
#include "Base.h"
class Employee :
	public Base
{


private:

	char* _department = nullptr;
	float _salary;


public:

	~Employee();
	Employee();
	Employee& operator=(const Employee& other);
	Employee(Employee&);
	void DisplayRecord();
	void SwapRecords(Employee& source, Employee& destination);


	const char* GetDepartment() { return _department; }
	float GetSalary() { return _salary; }


	void SetDepartment(const char* department);
	void SetSalary(float salary);

};


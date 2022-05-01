#include "Employee.h"
#include "Helper.h"
#include <iostream>

Helper halt;
Employee::~Employee()
{
	delete[] _department;
	_department = nullptr;
}


Employee::Employee()
{
	
}

Employee::Employee(Employee& other)
{
	SetDepartment(other._department);
	SetSalary(other._salary);
}

Employee& Employee::operator=(const Employee& other)
{
	if (this != &other)
	{
		_salary = other._salary;
		halt.CopyString(other._department, _department);
	}
	return *this;
}


void Employee::DisplayRecord()
{

	std::cout << "Name: " << GetName() << " is in Department " << *_department << ", Salary: " << _salary << std::endl;

}

void Employee::SetDepartment(const char* department)
{
	halt.CopyString(department, _department);
}



void Employee::SetSalary(float salary)
{
	_salary = salary;
}


void Employee::SwapRecords(Employee& source, Employee& destination)
{
	destination.SetName(source.GetName());
	destination.SetDepartment(source.GetDepartment());
	destination.SetSalary(source.GetSalary());
}
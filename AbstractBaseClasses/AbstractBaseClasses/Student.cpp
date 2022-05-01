#include "Student.h"
#include "Helper.h"
#include <iostream>

Helper studh;
Student:: ~Student()
{
	delete[] _degreeprogram;
	_degreeprogram = nullptr;
}
Student::Student()
{

}
Student& Student::operator=(const Student& other)
{
	if (this != &other)
	{
		_gpa = other._gpa;
		_likeability = other._likeability;
		studh.CopyString(other._degreeprogram, _degreeprogram);
	}
	return *this;
}
Student::Student(Student& other)
{
	SetDegreeProgram(other._degreeprogram);
	SetGpa(other._gpa);
	SetLikeAbility(other._likeability);
}
void Student::DisplayRecord()
{
	std::cout << "Name: " << GetName() << " Degree Program: " << *_degreeprogram << " GPA: " << _gpa << " Likeability: " << _likeability;
}


void Student::SetDegreeProgram(const char* degreeprogram)
{
	studh.CopyString(degreeprogram, _degreeprogram);
}
void Student::SetGpa(float gpa)
{
	_gpa = gpa;
}
void Student::SetLikeAbility(float likeability)
{
	_likeability = likeability;
}
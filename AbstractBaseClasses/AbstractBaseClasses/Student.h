#pragma once
#include "Base.h"
class Student :
	public Base
{

private:

	char* _degreeprogram;
	float _gpa;
	float _likeability;
	


public:


	~Student();
	Student();
	Student& operator=(const Student& other);
	Student(Student&);
	void DisplayRecord();

	const char* GetDegreeProgram() { return _degreeprogram; }
	float GetGpa() { return _gpa; }
	float GetLikeAbility() { return _likeability; }

	void SetDegreeProgram(const char* degreeprogram);
	void SetGpa(float gpa);
	void SetLikeAbility(float likeability);


};


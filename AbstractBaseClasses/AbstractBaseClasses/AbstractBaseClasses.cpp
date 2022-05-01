// AbstractBaseClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Helper.h"
#include "Base.h"
#include "Employee.h"
#include "Student.h"
#include <vector>


int main()
{
	Helper how;
	std::vector<Base*> v;
	
	
	
	
	while (true)
	{
		system("cls");
		

		int menuOptions = how.GetInt("Abstract Base Classes lab\n 1. Add Records\n 2. Manage Records\n 3. Exit\n ");
		

		switch (menuOptions)
		{
		case 1:
		{
			system("cls");
			int addRecords = how.GetInt("Do you want to add a Employee or a Student?\n 1. Add Employee\n 2. Add Student\n ");

			if (addRecords == 1)
			{
				Employee* person = new Employee();
				char name[100];
				char department[100];



				std::cout << "What is the Employee's name?" << std::endl;
				std::cin.getline(name, 100);
				person->SetName(name);

				std::cout << "What department is the Employee in?" << std::endl;
				std::cin.getline(department, 100);
				person->SetDepartment(department);

				float salary = how.GetFloat("What is the Employee salary?");
				person->SetSalary(salary);

				v.push_back(person);
				
				break;
			}
			if (addRecords == 2)
			{
				Student* personS = new Student();
				char name[100];
				char degreeprogram[100];



				std::cout << "What is the Student's name?" << std::endl;
				std::cin.getline(name, 100);
				personS->SetName(name);
				

				std::cout << "What degree program is the student in?" << std::endl;
				std::cin.getline(degreeprogram, 100);
				personS->SetDegreeProgram(degreeprogram);

				float gpa = how.GetFloat("What is the Student's gpa?");
				personS->SetGpa(gpa);

				float likeablity = how.GetFloat("What is the Student's likeablity?");
				personS->SetLikeAbility(likeablity);

				v.push_back(personS);
				break;
			}
			if (addRecords != 1 && addRecords != 2)
			{
				break;
			}

		}
		case 2:
		{
			system("cls");
			int Records = how.GetInt("Do you want to Display Records or Copy Records?\n 1. Display Records\n 2. Copy Records\n ");

			switch (Records)
			{
			case 1:
				for (int i = 0; i < v.size(); i++)
					v[i]->DisplayRecord();
				system("pause");
				break;

			case 2:


			case 3:
				break;
			}


		}
		case 3:
			exit(0);


		default:
			system("cls");
			std::cout << "Please input the correct choice" << std::endl;
			break;

		}
	}
}

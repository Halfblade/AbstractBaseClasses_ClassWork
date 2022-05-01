#include "Helper.h"
#include <iostream>

int Helper::GetValidatedInt(const char* prompt, int nMinRange, int nMaxRange)
{
	while (true)
	{
		int num = GetInt(prompt);
		if (nMinRange == 0 && nMaxRange == 0)
		{
			break;
		}
		if (num >= nMinRange && num <= nMaxRange)
		{
			return num;
		}
		else
		{
			std::cout << "Sorry " << num << " was not within range" << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
	}
	system("cls");
}


void Helper::GetIntPointer(const char* prompt, int* num)
{


	while (true)
	{
		std::cout << prompt << std::endl;
		std::cin >> (*num);
		if (!std::cin.fail())
		{
			std::cin.ignore(INT_MAX, '\n');
			break;
		}
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}

	system("cls");


}


int Helper::GetInt(const char* prompt)
{

	int num;
	std::cout << prompt << std::endl;
	while (true)
	{
		std::cin >> num;
		if (!std::cin.fail())
		{
			std::cin.ignore(INT_MAX, '\n');
			break;
		}
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}



	return num;
}



void Helper::getText(char*& text)
{
	//delete for overuse
	delete[] text;
	//create a buffer to copy into text
	char buffer[1024];
	std::cin.getline(buffer, sizeof(buffer));
	// find how many bytes actualy in char array
	// add one for null terminator
	int length = strlen(buffer) + 1;
	// created space on heap with newly stored char array
	text = new char[length];
	// strcpy do not use, strcpy_s do use
	strcpy_s(text, length, buffer);
	


}


void Helper::CopyString(const char* source, char*& destination)
{
	delete[] destination;

	//1. get the length of the source
	//2. allocate the memory for the destination
	//3. copy source array to destination array

	size_t len = strlen(source) + 1;//accout for the null terminator
	destination = new char[len];
	strcpy_s(destination, len, source);
}


float Helper::GetFloat(const char* prompt)
{
	float num;
	std::cout << prompt << std::endl;
	while (true)
	{
		std::cin >> num;
		if (!std::cin.fail())
		{
			std::cin.ignore(FLT_MAX, '\n');
			break;
		}
		std::cin.clear();
		std::cin.ignore(FLT_MAX, '\n');
	}



	return num;
}
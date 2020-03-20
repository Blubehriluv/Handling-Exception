#include <string>
#include <iostream>
#include "DivideByZeroException.h"
#include "Exceptions.h"


int main()
{

	NameLength();
	//Introduction();
	
}

//A function that handles exceptions.
void throwException(std::string exceptionType)
{
	if (exceptionType == "NameLength")
	{
		std::cout << "Your name is far too long!" << std::endl;
		std::cout << "Our free complimentary nametags can only fit 6 characters." << std::endl;
		std::cout << "Please, change your name." << std::endl;
		try
		{
			std::string newName;
			std::cin >> newName;
			throw newName;
		}
		catch (std::string reName)
		{
			std::cout << "Processing..." << std::endl;
			int i = 0;
			int lengthReplacer = reName.length();
			int counter = 1;
			for (i; i < lengthReplacer; i++)
			{
				std::cout << counter << ": " << reName.at(i) << std::endl;
				counter++;
			}
			if (counter > 6)
			{
				throwException("NameLength");
			}
		}
	}
}

//Allows the user to divide by any number AS LONG as it isn't zero.
void DivideByZero()
{
	//Creating starting values to hold the user's input
	float numA = 0;
	float numB = 0;

	//Introduction
	std::cout << std::endl;
	std::cout << "I will now solve your division problem." << std::endl;
	std::cout << "PLEASE. DO NOT DIVIDE BY ZERO." << std::endl;
	std::cout << "The expression equation will be in this format:" << std::endl;
	std::cout << "\t\t a / b = c" << std::endl;
	std::cout << std::endl;

	std::cout << "Please give me the first number." << std::endl;
	std::cin >> numA;

	//While loop tests second number until it isn't zero.
	while (numB == 0)
	{
		//Try statement throws the number to test it.
		try
		{
			std::cout << "Please give me the second number." << std::endl;
			std::cin >> numB;

			throw numB;
		}

		//Once caught, if the number is proven to be bad, the loop continues
		catch (float badNumber)
		{
			if (badNumber == 0)
			{
				std::cout << std::endl;
				std::cout << "Zero is not allowed as the second number." << std::endl;
				std::cout << std::endl;
			}
			//Otherwise, break out of the while loop
			else
			{
				break;
			}
		}
	}

	//Once broken out of the while loop, the equation solving may continue.
	float quotient = numA / numB;
	std::cout << std::endl;
	std::cout << "Processing..." << std::endl;
	std::cout << numA << " / " << numB << " = " << quotient << std::endl;
	system("Pause");
	Menu();
}

//The user will enter a random name of their choice which can only be 6 characters or shorter.
void NameLength()
{
	std::string userName;
	std::cout << std::endl;
	std::cout << "Tell me your name to see if it fits our free complimentary nametags." << std::endl;
	std::cin >> userName;
	std::cout << "Processing..." << std::endl;
	int i = 0;
	int lengthReplacer = userName.length();
	int counter = 0;
	for (i; i < lengthReplacer; i++)
	{
		counter++;
		std::cout << counter << ": " << userName.at(i) << std::endl;		
	}
	if (counter > 6)
	{
		throwException("NameLength");
	}

	std::cout << "Nice name! Your free complimentary nametag is in the mail. :)" << std::endl;
	system("Pause");
	Menu();	
}

void Birthday()
{
	//Enter a birthday that is possible to have
	//User cannot be more than 100 years old
	//Month number cannot be larger than 12
	//Month day cannot be larger than the correct amount of days
}


void Menu()
{
	//Requires the user to enter a number 1 to 3
	std::cout << std::endl;
	std::cout << "Please enter a number 1 to 4." << std::endl;
	try
	{
		
	}
	catch (DivideByZeroException divvy)
	{
		
	}
}


void Introduction()
{
	std::cout << "Welcome to the Exceptions Handler 2.0" << std::endl;
	std::cout << "We have [3] menu options available for you to experience." << std::endl;
	Menu();
}
//
/** @file  Person.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               Person is a base class for people enrolled in a course
//
//   originally Created by Tiziana Ligorio on 1/14/19.
//  Modified on 5/27/20 - add default constructor, mutator functions and operator==

#ifndef _PERSON_
#define _PERSON_
#include <string>

class Person {
public:
	//default constructor
	Person();

	//@param id unique id of person
	//@param first firstname of person	
	//@param last lastname of person object 
	//param constructor
	Person(int id, std::string first, std::string last);

	//accessor function: returns ID
	//returns:  value of ID
	int getID() const;

	//accessor function: returns first name
	//returns: firstname of person object
	std::string getFirstName() const;

	//accessor - returns last name
	//returns: lastname of person object
	std::string getLastName() const;

	// Function for testing iheretiance
	//it is to catch any changes to baseclass function
	//@return: string for testing derived class function
	std:string inheritanceTest() const;


	friend bool operator==(const Person& lhs, const Person& rhs) const;
protected:
	//protected data members
	int id_;
	std::string first_name_;
	std::string last_name_;
};

#endif
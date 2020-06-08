//
/** @file  Roster.hpp */
//  Project2
//  Description: A derived class from the base class ArrayBags  to implement 
//	lists of people into Arraybag
//
//   Created by Shihab Islam on 06/07/2020

#ifndef ROSTER
#define ROSTER
#include "ArrayBag.hpp"
#include "Student.hpp"
#include "Person.hpp"
#include <fstream>
#include <sstream>

class Roster :public ArrayBag<Student> {
public:
	// default constructor for an empty roster
	Roster();

	//param constructor
	// CSV  file formated as “ id,first_name_,last_name "
	//@param input_file_name the name of the input csv file
	Roster(std::string input_file_name);

	//will display the entire roster per line as first_name_ last_name_
	void display();
};

#endif 
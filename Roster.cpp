//
/** @file  Roster.hpp */
//  Project2
//  Description: A derived class from the base class ArrayBags  to implement 
//	lists of people into Arraybag
//
//   Created by Shihab Islam on 06/07/2020

#include "Roster.hpp"
#include <string>


// default constructor for an empty roster
Roster::Roster() :ArrayBag<Student>() {
}


//param constructor
// CSV  file formated as “ id,first_name_,last_name "
//@param input_file_name the name of the input csv file
//Students will be added to roster by csv file
Roster::Roster(std::string input_file_name) :ArrayBag<Student>() {
	std::ifstream infile;
	infile.open(input_file_name);
	int id_int;
	std::string id, first, last; //the variables to store the inputted data 
	while (getline(infile, id, ',') && 
		getline(infile, first, ',') && getline(infile, last)) { 
		id_int = std::convert(id); //takes string id to be an integer id
		Student name = Student(id_int, first, last); //creating student object
		add(name); //add student object to 
	}
}


//will display the entire roster per line as first_name_ last_name_
void Roster::display() {
	for (int i = 0; i < item_count_; i++) {
		std::cout << items_[i].getFirstName() << " " << items_[i].getLastName() << "\n";
	}
}
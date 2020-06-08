#include "Roster.hpp"
#include <string>

	//	default constructor for empty roster	
Roster::Roster():ArrayBag<Student>() 
{	
}

//param constructor
// CSV  file formated as “ id,first_name_,last_name "
//@param input_file_name the name of the input csv file
//Students will be added to roster by csv file
Roster::Roster(std::string input_file_name):ArrayBag<Student>(){	
	std::ifstream infile; 
	infile.open(input_file_name);
	int id_int;
	std::string id, first, last; //the variables that store inputted roster
	while(getline(infile, id, ',')&&getline(infile, first, ',') && getline(infile, last)){ //delimiter used
		id_int = std::stoi(id); //  converts from string id to integer id 
		Student temp = Student(id_int, first, last); //creates student object using student constructor
		add(temp); // add student object to  empty roster
	}
}

	//@post displays all students in roster, per line
	 //as  "first_name_ last_name_ "
	 
void Roster::display(){
	for(int i=0; i< item_count_; i++){
		std::cout << items_[i].getFirstName() << " " << items_[i].getLastName() << "\n";
	}
}

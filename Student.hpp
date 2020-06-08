//
/** @file  Student.hpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               Student is a derived class from Person
//
//   originally Created by Tiziana Ligorio on 1/14/19.
//
//
#ifndef STUDENT
#define STUDENT
#include "Person.hpp"
#include <string>

class Student :public Person { //student is inherited class, person is base class
public:
	
	Student(); //default constructor 


	// param constructor
	Student(int id, std::string first, std::string last);

	//accessor function: returns major_
	//returns: student's major
	std::string getMajor() const;

	//accessor function: returns gpa_
	//returns: student's gpa
	double getGpa() const;

	//mutator function- sets major_ to major
	//@param major the student's major
	void setMajor(const std::string major);

	//mutator function- sets gpa_ to gpa
	//@param gpa- the student's gpa(between 0 and 4)
	void setGpa(const double gpa);
protected:
	//protected data members
	std::string major_;
	double gpa_;
};


#endif
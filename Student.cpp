//
/** @file  Student.cpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               Student is a derived class from Person
//
//  originally Created by Tiziana Ligorio on 1/14/19.
//
//
#include "Student.hpp"
#include "Person.hpp"
#include <string>

//default constructor for student derived class
Student::Student() :Person() {
	major_ = "";
	gpa_ = 0;
}



//param constructor
Student::Student(int id, std::string first, std::string last) :Person(id, first, last) {
	major_ = "";
	gpa_ = 0;
}

//accessor function- returns major_
//@returns:  student's major
std::string Student::getMajor() const {
	return major_;
}


//accessor function- returns gpa_
//@returns:  student's gpa
double Student::getGpa() const {
	return gpa_;
}

//mutator function- sets major_ to major
//@param major the student's major
void Student::setMajor(const std::string major) {
	major_ = major;
}

//mutator function- sets gpa_ to gpa
//@param gpa- the student's gpa(between 0 and 4)
void Student::setGpa(const double gpa) {
	if (gpa > 0 && gpa <= 4.0) {
		gpa_ = gpa;
	}
}

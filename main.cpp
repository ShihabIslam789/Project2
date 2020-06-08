#include "ArrayBag.hpp"
#include "Roster.hpp"
#include "Student.hpp"

int main() {
	
	Roster list = Roster("roster.csv");
	list.display();
	return 0;
}
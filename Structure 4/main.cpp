#include <iostream>
#include <string>

#include "Header/header.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	cout<<"How many student in this class? ";
	cin >>n;
	Student *student = new Student[n];
	inputInfo(student, n);
	displayInfo(student, n);
	
	delete(student);

	system("pause");
	return 0;
}
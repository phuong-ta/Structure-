
#include <iostream>
#include <string>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Person{
	
	string name;
	int year;
};

void displayInfo(Person p){
	cout<< p.year<<endl;
	cout<<p.name<<endl;
}

int main() {
	Person p1;
	
	cout<<"Enter name ";
	getline (std::cin,p1.name);
	cout<<"Enter year ";
	cin>>p1.year;

	displayInfo(p1);
	
	system("pause");
	return 0;
}

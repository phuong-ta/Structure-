#include <iostream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Student{
	string name;
};

void inputInfo(Student *st, int n){
	cout<<"Hello from function"<<n<<endl;
	for(int i=0; i<n; i++){
		cout<<"Enter name of "<<i+1<<" student ";
		cin>>st[i].name;
	}
}

void displayInfo(Student *st, int n){
	for(int i=0; i<n; i++){
		cout<<i+1<<". Student name is: "<< st[i].name<<endl;
	}
}

int main() {
	
	cout<<" Hello There!"<<endl;

	cout<<" Hello There!"<<endl;
	int n;
	cout<<"How many student: ";
	cin>>n;
	Student *st= new Student[n];
	inputInfo(st, n);
	displayInfo(st, n);
	
	delete(st);
	system("pause");
	return 0;
}

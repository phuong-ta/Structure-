#include <iostream>
#include <string>

#include "../Header/header.h"
using namespace std;

void inputInfo(Student *st, int n){
	for(int i=0; i<n; i++){
		
		cout<<"Enter name of "<<i+1<<" student ";
		cin>>st[i].name;
		cout<<"Enter id of "<<i+1<<" student ";
		cin>>st[i].id;
		cout<<"Enter Math point of "<<i+1<<" student ";
		cin>>st[i].math;
		cout<<"Enter English point of "<<i+1<<" student ";
		cin>>st[i].english;
		cout<<"Enter IT point of "<<i+1<<" student ";
		cin>>st[i].it;
		st[i].gpa = (st[i].math + st[i].english + st[i].it)/3;
		cout<<endl;
	}
}

void displayInfo(Student *st, int n){
	for(int i=0; i<n; i++){
		cout<<i+1<<". Student name is: "<< st[i].name<<endl;
		cout<<"\tID: "<<st[i].id<<endl;
		cout<<"\tMATH: "<<st[i].math<<endl;
		cout<<"\tENGLISH: "<<st[i].english<<endl;
		cout<<"\tIT: "<<st[i].it<<endl;
		cout<<"\tGPA: "<<st[i].gpa<<endl;
		cout<<"------------------------"<<endl;
	}
}

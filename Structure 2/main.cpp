#include <iostream>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct info{
	string name;
};

int main() {
	//info *student;
	int n;
	cout << "\n So thi sinh n = " ;
	cin >> n;
	info *student = new info[n];
	
	if(student == NULL){
		cout<< "Error"<<endl;
		exit(0);
		}
	
	for(int i=0; i<n;i++){
		cout<< "Student "<<i+1<<" name: ";
		//getline(cin, student[i].name);
		cin>>student[i].name;
	}
	
	for(int i =0; i<n; i++){
		cout<< "Student "<<i+1<<" name: "<<student[i].name<<endl;
	}

	delete(student);
	system("pause");
	return 0;
}
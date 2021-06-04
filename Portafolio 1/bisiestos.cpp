#include <iostream>

using namespace std;

int main (){
	
	int year;
	cout << "Please give a year: ";
	cin >> year;
	
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
			cout << year << " its a leap year!" << endl;
			else
			cout << year << " isnt a leap year!" << endl;
		
		} else{
			cout << year << " isnt a leap year!" << endl; 
		}
	
	} else{
			cout << year << " isnt a leap year!" << endl; 
	}

return 0;
}

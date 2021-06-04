#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	
	int movJug;
	cout << " Juguemos a piedra, papel o tijera, selecciona tu movimiento \n";
	cout << " \n 1. Piedra \n 2. Papel \n 3. Tijera \n : ";
	cin >> movJug;
	
	srand(time(0));
	string movComp;
	int NumMov = rand() % 3 + 1;
	
	switch(NumMov) {
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
	}
	
	cout << " \n la Computadora escogio: " << movComp << endl;
	
	if (movJug == NumMov){
		cout << " \n Empate \n";
	} else if ( (movJug == 1) && (NumMov == 3)) {
		cout << " Ganaste \n";
	} else if ( (movJug == 2) && (NumMov == 1)) {
		cout << " Ganaste \n";
	} else if ( (movJug == 3) && (NumMov == 2)) {
		cout << " Ganaste \n";
	} else {
		cout << " Perdiste \n";
	}
	return 0;
}





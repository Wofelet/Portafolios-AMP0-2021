#include <iostream>

using namespace std;

int Prfcto (int);
void prntPrfcto(int);

int main(){
	int Owl;
	
	cout << "Numeros perfectos entre uno y mil" << endl;
	
	for (int counter = 1; 1000 >= counter; ++counter){
		Owl = Prfcto (counter);
		if (1 == Owl)
		prntPrfcto (counter);
	}
	
	cout << endl << endl;
	return 0;
}

int Prfcto (int dgt) {

	int suma = 0, factor;

	for (int divisor = 1; divisor < dgt; ++ divisor){

		if (0 == dgt % divisor) {
		factor = divisor;
		suma += factor;
	}
		}
	if (suma == dgt)
	return 1;
	
	else
	return 0;
}

void prntPrfcto (int yrk) {
	
	cout << endl << endl << yrk << "\nes divisible entre: " << endl;
	
	for (int divisor = 1; divisor < yrk; ++divisor)
	if (0 == yrk%divisor)
	cout << divisor << "\n";
	
	return ;
}

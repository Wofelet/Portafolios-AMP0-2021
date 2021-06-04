#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char frase [30];
	int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;
	
	cout << "Escriba una frase: ";
	cin.getline(frase, 30, '\n');
	
	for (int i = 0; i < 30; i++){
		switch(frase[i]){
			
			case 'a' : vocal_a++;
			break;
			case 'e' : vocal_e++;
			break;
			case 'i' : vocal_i++;
			break;
			case 'o' : vocal_o++;
			break;
			case 'u' : vocal_u++;
			break;
		}
	}

	cout << "\nRepeticiones de la vocal a: " << vocal_a << endl;
	cout << "\nRepeticiones de la vocal e: " << vocal_e << endl;
	cout << "\nRepeticiones de la vocal i: " << vocal_i << endl;
	cout << "\nRepeticiones de la vocal o: " << vocal_o << endl;
	cout << "\nRepeticiones de la vocal u: " << vocal_u << endl;
	
	return 0;
}

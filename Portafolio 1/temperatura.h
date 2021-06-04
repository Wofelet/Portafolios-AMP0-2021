#ifndef TEMPERATURA_TEMPERATURA_H
#define TEMPERATURA_TEMPERATURA_H

#include <iostream>

using namespace std;

int leerSeleccionUsuario(){
	int seleccion;
	
	cout << "* Conversor de temperatras *" << endl;
	cout << "1 - De Celsius a Fahrenheit" << endl;
	cout << "2 - De Celsius a Kelvin" << endl;
	cout << "3 - De Fahrenheit a Celsius" << endl;
	cout << "4 - De Fahrenheit a Kelvin" << endl;
	cout << "5 - De Kelvin a Celsius" << endl;
	cout << "6 - De Kelvin a Fahrenheit" << endl;
	cout << "Seleccione el tipo de conversion: ";
	
	while(!(cin >> seleccion) || seleccion < 1 || seleccion > 6){
		cout << "Ingrese un valor entre 1 y 6: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	
	return seleccion;
}

double leerTemperatura(){
	double temperatura;
	cout << "Ingrese el valor de temperatura a convertir: ";
	
	while(!(cin >> temperatura)){
		cout << "Ingrese un valor de temperatura: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return temperatura;
}

double convertirTemperatura(int tipo, double temperatura){
	double temperaturaConvertida;
	
	switch(tipo){
		case 1:
			temperaturaConvertida = 1.8 * temperatura + 32;
			cout << "la temperatura " << temperatura << " C equivale a " << temperaturaConvertida << " F."  << endl;
			break;
		case 2:
			temperaturaConvertida = temperatura + 273.15;
			cout << "La temperatura " << temperatura << " C equivale a " << temperaturaConvertida << " K." << endl;
			break;
		case 3:
			temperaturaConvertida = (temperatura - 32)/1.8;
			cout << "la temperatura " << temperatura << " F equivale a " << temperaturaConvertida << " C."  << endl;
			break;
		case 4:
			temperaturaConvertida = (5/9)*(temperatura - 32) + 273.15;
			cout << "La temperatura " << temperatura << " F equivale a " << temperaturaConvertida << " K." << endl;
			break;
		case 5:
			temperaturaConvertida = temperatura - 273.15;
			cout << "la temperatura " << temperatura << " K equivale a " << temperaturaConvertida << " C."  << endl;
			break;
		case 6:
			temperaturaConvertida = (1.8*(temperatura - 273.15)) + 32;
			cout << "La temperatura " << temperatura << " K equivale a " << temperaturaConvertida << " F." << endl;
			break;
		default:
			cout << "Opcion no valida";
			break;
	}
	return temperaturaConvertida;
}

#endif

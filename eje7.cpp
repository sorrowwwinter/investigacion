#include <iostream>
using namespace std;

int main() {
	int horasTrabajadas;
	float salario;
	const int PRECIO_HORA = 1000; // con este ejercicio aprendi´ que es mejercicio usar constantemente int porque es ma´s seguro
	
	
	cout << "Ingresa cuantas horas trabajaste esta semana";
	cin >> horasTrabajadas;
	
	while (horasTrabajadas  <= 0) {
		cout << "Error: tienes que ingresar un numero de horas mayor que 0." << endl;
		cout << "Ingresa nuevamente la cantidad de horas trabajadas: " << endl;
		cin >> horasTrabajadas ;
	}
	
	
	if (horasTrabajadas <= 40) {
		salario = horasTrabajadas * PRECIO_HORA;
	} else {
		int horasExtra = horasTrabajadas - 40;
		salario = (40 * PRECIO_HORA) + (horasExtra * PRECIO_HORA * 1.5);
	}
	
	cout << "Tu salario esta semana es de: " << salario << " colones" << endl;
	cout << "Sigue asi! :D " << endl;
	
	return 0;
}

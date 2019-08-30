#include <iostream>
#include "Empleado.h"

int main() {
	srand(time(NULL));
	
	Empleado empleado[3];
	
	empleado[0].setNombreEmpleado("Mike");
	empleado[0].setAnnioExperiencia(2);
	empleado[0].setSalarioBase(1200000);
	
	empleado[1].setNombreEmpleado("Sebastian");
	empleado[1].setAnnioExperiencia(3);
	empleado[1].setSalarioBase(1600000);
	
	empleado[2].setNombreEmpleado("Carolina");
	empleado[2].setAnnioExperiencia(8);
	empleado[2].setSalarioBase(1800000);
	
	empleado[3].setNombreEmpleado("Emma");
	empleado[3].setAnnioExperiencia(1);
	empleado[3].setSalarioBase(800000);
	
	for (int contador = 0; contador < 4; contador++) {
		std::cout << empleado[contador].imprimirEmpleado(empleado[contador])<< std::endl;
	}
	
	return 0;
}

/*

 * =====================================================================================

 *

 * Filename: Empleado.h

 *

 * Description: DefiniciÃ³n de la Clase Empleado

 *

 * Created: 2019-08-22

 *

 * Author: Dylan Molina Obando

 * Organization: Universidad Nacional de Costa Rica

 *

 * =====================================================================================

 */

#ifndef EMPLEADOPUNTEROS_EMPLEADO_H

#define EMPLEADOPUNTEROS_EMPLEADO_H

#include <iostream>

#include <string>

#include<stdlib.h>

#include<time.h>

const int numMaxEmple = 100;

class Empleado {
protected:

    int numeroEmpleado;

    std::string nombreEmpleado;

    int annioExperiencia;

    float salarioBase;

    bool disponibilidad;

public:

    float aumentarSalario(Empleado&);

    bool revisionAleatoria(Empleado&);

    Empleado();

    Empleado(std::string &nombreEmpleado1, int, float);

    std::string obtenerDatosEmpleado();

    const std::string getNombreEmpleado();

    void setNombreEmpleado(const std::string);

    int getAnnioExperiencia();

    void setAnnioExperiencia(int);

    float getSalarioBase();
	bool getDisponibilidad();

    void setSalarioBase(float);
	

    std::string imprimirEmpleado(Empleado&);

};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H

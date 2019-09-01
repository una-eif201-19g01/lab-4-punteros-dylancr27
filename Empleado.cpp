/*

 * =====================================================================================

 *

 * Filename: Empleado.cpp

 *

 * Description: ImplementaciÃ³n de la Clase Empleado

 *

 * Created: 2019-08-22

 *

 * Author: Dylan Molina Obando

 * Organization: Universidad Nacional de Costa Rica

 *

 * =====================================================================================

 */

#include "Empleado.h"

Empleado::Empleado(std::string &nombreEmpleado1, int annioExperiencia1, float salarioBase1) {

    nombreEmpleado = nombreEmpleado1;

    annioExperiencia = annioExperiencia1;

    salarioBase = salarioBase1;

    numeroEmpleado = std::rand() % numMaxEmple;

}

std::string Empleado::obtenerDatosEmpleado()
 {

    return std::string();

}

const std::string Empleado::getNombreEmpleado() {

    return nombreEmpleado;

}

void Empleado::setNombreEmpleado(std::string nomEmple) {

    nombreEmpleado = nomEmple;

}

int Empleado::getAnnioExperiencia() {

    return annioExperiencia;

}

void Empleado::setAnnioExperiencia(int annioEx) {

    annioExperiencia = annioEx;

}

float Empleado::getSalarioBase() {

    return salarioBase;

}

void Empleado::setSalarioBase(float salaBase) {

    salarioBase = salaBase;

}

bool Empleado::revisionAleatoria(Empleado& empleado) {

    if (rand() % 2 == 0) {

        empleado.disponibilidad = false;

    }
    else {

        empleado.disponibilidad = true;

    }

}

Empleado::Empleado()
 {

}
bool Empleado::getDisponibilidad(){return disponibilidad;}

float aumentarSalario( Empleado& empleado) {

    float salario =empleado.getSalarioBase();

    if (empleado.getAnnioExperiencia() >= 3) {

        return (salario * 0.05);

    }
    else

        return (salario * 0.02);

}

std::string imprimirEmpleado(Empleado& empleado) {

    std::string reporteEmpleado =

            "\tNombre[" + empleado.getNombreEmpleado() + "]" +

            "\n\tAnios de experiencia[" + std::to_string(empleado.getAnnioExperiencia()) + "]" +

            "\n\tSalario Inicial[" + std::to_string(empleado.getSalarioBase()) + "]" +

            "\n\tSalario Acumulado[";
		empleado.revisionAleatoria(empleado);
    if (empleado.getDisponibilidad()) {
        empleado.aumentarSalario(&empleado);
    }

    reporteEmpleado += std::to_string(empleado.getSalarioBase()) + "]" + "\n\tNecesita revision[";

    reporteEmpleado += (empleado.getDisponibilidad()) ? "Si]\n" : "No]\n";

    return reporteEmpleado;

}
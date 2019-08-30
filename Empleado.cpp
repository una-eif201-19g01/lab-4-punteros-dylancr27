/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  ImplementaciÃ³n de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Dylan Molina Obando
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include "Empleado.h"


Empleado::Empleado() {
    numeroEmpleado = std::rand() % numMaxEmple;
}

Empleado::Empleado(std::string &nombreEmpleado, int annioExperiencia, float salarioBase) : nombreEmpleado(nombreEmpleado),
annioExperiencia(annioExperiencia), salarioBase(salarioBase) {
    numeroEmpleado = std::rand() % numMaxEmple;

}

const std::string Empleado::getNombreEmpleado() {
    return nombreEmpleado;
}

void Empleado::setNombreEmpleado(std::string nomEmple){
    nombreEmpleado=nomEmple;
}

int Empleado::getAnnioExperiencia(){
    return annioExperiencia;
}

void Empleado::setAnnioExperiencia(int annioEx){
    annioExperiencia=annioEx;
}

float Empleado::getSalarioBase(){
    return salarioBase;
}

void Empleado:: setSalarioBase(float salaBase){
    salarioBase=salaBase;
}

void Empleado::revisionAleatoria(bool* disponiblidad) {
    if (rand() % 2 == 0) {
        *disponibilidad = false;
    } else {
        *disponibilidad = true;
    }

}

float aumentarSalario(const int *annioExperiencia) {
    float salario = annioExperiencia.getSalarioBase();
    if (annioExperiencia >= 3) {
        return (salario * 0.05);
    } else
        return (salario * 0.02);
}

std::string imprimirEmpleado(Empleado& Empleado) {
    std::string reporteEmpleado =
		"\tNombre[" + Empleado.getNombreEmpleado() + "]" +
		"\n\tAños de experiencia[" + std::to_string(Empleado.getAnnioExperiencia()) + "]" +
		"\n\tSalario Inicial[" + std::to_string(Empleado.getSalarioBase()) + "]" +
		"\n\tSalario Acumulado[";
	revisionAleatoria(Empleado);
	if (Empleado.revisionAleatoria) { Empleado.aumentoSalario(&Empleado); }
	reporte += std::to_string(Empleado.getSalario()) + "]" + "\n\tNecesita revision[";
	reporte+=(Empleado.revisionAleatoria) ? "Si]\n" : "No]\n";
	return reporteEmpleado;
}

 




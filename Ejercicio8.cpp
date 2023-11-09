#include <iostream>
#include <string>
#include <vector>

class Estudiante {
public:
    Estudiante(const std::string& nombre, const std::string& grado) : nombre(nombre), grado(grado) {}

    const std::string& getGrado() const {
        return grado;
    }

    const std::string& getNombre() const {
        return nombre;
    }
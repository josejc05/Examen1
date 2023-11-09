#include <iostream>
#include <vector>
#include <string>

using namespace std;
class MateriaRegistradaException {
public:
    MateriaRegistradaException(const string& materia) : materia(materia) {}

    string getMateria() const {
        return materia;
    }

private:
    string materia;
};
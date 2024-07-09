#pragma once
#include "lista.h"
#include "departamento.h"
#include <iostream>

class ListaDepartamento{
private:
    Lista<Departamento> lista;

public:
    ListaDepartamento();
    ~ListaDepartamento();
    void incluiDpto(Departamento* pDpto);
    void listaDptos();
    void limpaListaDptos();
};
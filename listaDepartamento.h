#pragma once
#include "lista.h"
#include "departamento.h"

class ListaDepartamento{
private:
    Lista<Departamento> lista;

public:
    ListaDepartamento();
    ~ListaDepartamento();
    void incluaDepartamento(Departamento* dpto);
    void listaDepartamentos();
    void limpaLista();
};
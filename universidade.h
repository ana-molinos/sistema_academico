#pragma once
#include "minhaString.h"
#include "listaDepartamento.h"

class Universidade
{
private:
    MinhaString nomeUniv;
    ListaDepartamento objListaDepartamentos;

public:
    Universidade(const char* nome = "");
    /*Universidade(); não se faz necessario uma vez que o construtor orginal tem apenas um parametro
      e ele está setado como vazio por default*/
    ~Universidade();
    void setNome(const char* nome);
    MinhaString getNome();
    void incluiDpto(Departamento* pDpto);
    void listaDptos();
};
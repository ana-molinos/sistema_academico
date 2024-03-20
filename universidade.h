#pragma once
#include "departamento.h"

class Universidade
{
private:
    char nomeUniv[30];

    Departamento* pDpto;

public:
    Universidade(const char* nome = "");
    /*Universidade(); não se faz necessario uma vez que o construtor orginal tem apenas um parametro
      e ele está setado como vazio por default*/
    ~Universidade();
    void setNome(const char* nome);
    char* getNome();
    void setDpto(Departamento* pD);
};
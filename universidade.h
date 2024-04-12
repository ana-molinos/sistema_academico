#pragma once
#include "departamento.h"
#include <string.h>
#include <iostream>
using namespace std;

class Universidade
{
private:
    char nomeUniv[30];

    Departamento* dptos[50];

public:
    Universidade(const char* nome = "");
    /*Universidade(); não se faz necessario uma vez que o construtor orginal tem apenas um parametro
      e ele está setado como vazio por default*/
    ~Universidade();
    void setNome(const char* nome);
    char* getNome();
    void setDpto(Departamento* pD);
    void imprimeDptos();
};
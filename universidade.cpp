#include "universidade.h"

Universidade::Universidade(const char* nome):
objListaDepartamentos()
{
    strcpy(nomeUniv, nome);
}

Universidade::~Universidade(){
    objListaDepartamentos.limpaListaDptos();
}

void Universidade::setNome(const char* nome){
    strcpy(nomeUniv, nome);
}

char* Universidade::getNome(){
    return nomeUniv;
}

void Universidade::incluiDpto(Departamento* pDpto){
    objListaDepartamentos.incluiDpto(pDpto);
}

void Universidade::imprimeDptos()
{
    cout << "LISTA DE DEPARTAMENTOS - " << nomeUniv << endl;
    objListaDepartamentos.listaDptos();
}
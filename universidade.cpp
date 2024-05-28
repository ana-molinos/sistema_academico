#include "universidade.h"


Universidade::Universidade(const char* nome):
nomeUniv(nome),
objListaDepartamentos()
{
}

Universidade::~Universidade(){

}

void Universidade::setNome(const char* nome){
    nomeUniv = nome;
}

MinhaString Universidade::getNome(){
    return nomeUniv;
}

void Universidade::incluiDpto(Departamento* pDpto){
    objListaDepartamentos.incluaDepartamento(pDpto);
}

void Universidade::listaDptos()
{
    cout << "LISTA DE DEPARTAMENTOS - " << nomeUniv << endl;
    objListaDepartamentos.listaDepartamentos();
}
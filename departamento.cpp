#include "departamento.h"
#include <string.h>
#include "universidade.h"

Departamento::Departamento(int n_id, const char* nome_dpto)
{
    id = n_id;
    strcpy(nome, nome_dpto);
    //pUniv = NULL;
}

Departamento::~Departamento()
{

}

int Departamento::getId()
{
    return id;
}

void Departamento::setNome(const char* n)
{
    strcpy(nome, n);
}

char* Departamento::getNome()
{
    return nome;
}

void Departamento::setUniv(Universidade *pU)
{
    pUniv = pU;
}
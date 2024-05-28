#include "departamento.h"
#include "universidade.h"
#include "disciplina.h"
#include <iostream>
using namespace std;

Departamento::Departamento(int n_id, const char* nome_dpto):
objListaDisciplinas(),
nome(nome_dpto)
{
    id = n_id;
    pUniv = NULL;
}

Departamento::~Departamento()
{
    pUniv = NULL;
}

int Departamento::getId()
{
    return id;
}

void Departamento::setNome(const char* n)
{
    nome = n;
}

MinhaString Departamento::getNome()
{
    return nome;
}

void Departamento::setUniv(Universidade *pU)
{
    pUniv = pU;
    pU->incluiDpto(this);
    //toda vez que associo uma univ a um dpto, ja estou incluindo ele na lista de dptos associados da univ
}

void Departamento::incluiDisciplina(Disciplina* pDisc)
{
   objListaDisciplinas.incluaInfo(pDisc);
}

void Departamento::listaDisciplinas()
{
    cout << "LISTA DE DISCIPLINAS - " << nome << endl;
    //objListaDisciplinas.imprimeLista();
}
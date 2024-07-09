#include "departamento.h"
#include "universidade.h"
#include "disciplina.h"
#include <iostream>
using namespace std;

Departamento::Departamento(int n_id, const char* nome_dpto):
objListaDisciplinas()
{
    id = n_id;
    strcpy(nome, nome_dpto);
    pUniv = NULL;
}

Departamento::~Departamento()
{
    pUniv = NULL;
    objListaDisciplinas.limpaListaDisciplinas();
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
    pU->incluiDpto(this);
    //toda vez que associo uma univ a um dpto, ja estou incluindo ele na lista de dptos associados da univ
}

void Departamento::incluiDisciplina(Disciplina* pDisc)
{
   objListaDisciplinas.incluiDisciplina(pDisc);
}

void Departamento::listaDisciplinas()
{
    cout << "LISTA DE DISCIPLINAS - " << nome << endl;
    objListaDisciplinas.listaDisciplinas();
}
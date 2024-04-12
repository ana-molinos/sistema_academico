#include "departamento.h"
#include <string.h>
#include "universidade.h"
#include "disciplina.h"
#include "elDisciplina.h"
#include <iostream>
using namespace std;

Departamento::Departamento(int n_id, const char* nome_dpto)
{
    id = n_id;
    strcpy(nome, nome_dpto);
    pUniv = NULL;
    pElDiscPrim = NULL;
    pElDiscUlt = NULL;
}

Departamento::~Departamento()
{
    pUniv = NULL;
    pElDiscPrim = NULL;
    pElDiscUlt = NULL;
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
    pU->setDpto(this);
    //toda vez que associo uma univ a um dpto, ja estou incluido ele na lista de dptos associados da univ
}

void Departamento::incluiDisciplina(Disciplina* pDisc)
{
    ElDisciplina* paux; //ponteiro auxiliar para o elemento disciplina

    //alocação dinamica de um novo objeto elemento disciplina que tem seu endereço passado para paux
    paux = new ElDisciplina(); 

    //o elemento disciplina passa a apontar para a disciplina que esta sendo incluida
    paux->setpDisc(pDisc);

    if(pElDiscPrim == NULL)
    {
        pElDiscPrim = paux;   
        pElDiscUlt = paux;
    }
    else
    {
        //o prox do ultimo elemento disciplina deve apontar para o elemento disciplina atual
        pElDiscUlt->setpElDiscProx(paux);
        //o anterior do elemento disciplina em qeustão deve receber o ultimo elemento disciplina lista
        paux->setpElDiscAnt(pElDiscUlt);
        //a ultima disciplina deve ser atualizada para a disciplina atual
        pElDiscUlt = paux;
    }
}

void Departamento::listaDisciplinas()
{
    ElDisciplina* pElDisc = pElDiscPrim;

    cout << "LISTA DE DISCIPLINAS - " << nome << endl;
    while(pElDisc != NULL)
    {
        cout << "Nome: " << pElDisc->getNome() << " - " << "ID :" << pElDisc->getId() << endl;
        pElDisc = pElDisc->getpElDiscProx();
    }
}
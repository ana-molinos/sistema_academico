#include "departamento.h"
#include <string.h>
#include "universidade.h"
#include "disciplina.h"

Departamento::Departamento(int n_id, const char* nome_dpto)
{
    id = n_id;
    strcpy(nome, nome_dpto);
    pUniv = NULL;
    pDiscPrim = NULL;
    pDiscUlt = NULL;
}

Departamento::~Departamento()
{
    pUniv = NULL;
    pDiscPrim = NULL;
    pDiscUlt = NULL;
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

void Departamento::incluiDisciplina(Disciplina* pDisc)
{
    if(pDiscPrim == NULL)
    {
        pDiscPrim = pDisc;
        pDiscUlt = pDisc;
    }
    else
    {
        //o prox da ultima disciplina deve receber a disciplina em execução
        pDiscUlt->setpDiscProx(pDisc); //tem que fazer set e get 
        //o anterior da disciplina em execução deve receber a ultima disciplina da lista
        pDisc->setpDiscAnt(pDiscUlt);
        //a ultima disciplina deve ser atualizada para a disciplina atual
        pDiscUlt = pDisc;
    }
}
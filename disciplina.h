#pragma once
#include "departamento.h"

class Disciplina
{
private:
    int id;
    char nome[150];
    Departamento* pDptoAssociado;
    //ponteiros para lista duplamente encadeada de disciplinas pertencente a Departamento
    Disciplina* pDiscProx;
    Disciplina* pDiscAnt;

private:
    Disciplina(int n_id = 0, const char* nome_disc = "");
    ~Disciplina();
    void setId(int n_id);
    int getId();
    void setNome(const char* nome_disc);
    char* getNome();
    void setDptoAssociado(Departamento* pDpto);
};
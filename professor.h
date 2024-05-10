#pragma once
#include "pessoa.h"
#include "universidade.h"

class Professor : public Pessoa
{
private:
    Universidade *pUniv;
    Departamento *pDptoFiliado;

public:
    Professor(int diaNa, int mesNa, int anoNa, MinhaString nome = "");
    Professor();
    ~Professor();
    void setUniv(Universidade* pU);
    void setDptoFiliado(Departamento* pDp);
    void imprimeNomeUniv();
    void imprimeNomeUnivDpto();
};
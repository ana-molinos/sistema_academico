#pragma once
#include "pessoa.h"
#include "universidade.h"

class Professor : public Pessoa
{
private:
    Universidade *pUniv;
    Departamento *pDptoFiliado;
    float salario;
    float bolsaProj;

public:
    Professor(int diaNa, int mesNa, int anoNa, const char* nome = "", float sal=0, float bolsa=0);
    Professor();
    ~Professor();
    void setUniv(Universidade* pU);
    void setDptoFiliado(Departamento* pDp);
    void imprimeNomeUniv();
    void imprimeNomeUnivDpto();
    void informaProventos();
    void setSalario(float sal);
    float getSalario();
    void setBolsa(float bolsa);
    float getBolsa();
};
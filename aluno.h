#pragma once
#include "pessoa.h"

class Aluno : public Pessoa
{
private:
    int raAluno;

public:
    Aluno(int diaNa, int mesNa, int anoNa, MinhaString nome = "", int ra = -1);
    Aluno();
    ~Aluno();
    void setRaAluno(int ra);
    int getRaAluno();
    MinhaString getNome();
    void imprimeDadosAlunos();
};
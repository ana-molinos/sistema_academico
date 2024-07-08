#pragma once
#include "pessoa.h"

class Aluno : public Pessoa
{
private:
    int raAluno;

public:
    Aluno(int diaNa, int mesNa, int anoNa, const char* nome = "", int ra = -1);
    Aluno();
    ~Aluno();
    void setRaAluno(int ra);
    int getRaAluno();
    char* getNome();
    void imprimeDadosAlunos();
};
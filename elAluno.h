#pragma once
#include "aluno.h"

class ElAluno{
private:
    Aluno* pAluno;
    ElAluno* pElAlunoAnt;
    ElAluno* pElAlunoProx;

public:
    ElAluno();
    ~ElAluno();
    void setpAluno(Aluno* pA);
    Aluno* getpAluno();
    void setpElAlunoAnt(ElAluno* pElAluno);
    ElAluno* getpElAlunoAnt();
    void setpElAlunoProx(ElAluno* pElAluno);
    ElAluno* getpElAlunoProx();
    char* getNome();
    int getRa();
};
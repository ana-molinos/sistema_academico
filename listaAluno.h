#pragma once
#include "elAluno.h"

class ListaAluno{
private:
    int n_alunos;
    int qtdd_alunos;
    ElAluno* pElAlunoPrim;
    ElAluno* pElAlunoUlt; 

public:
    ListaAluno(int n_a = 45, int q_a = 0);
    ~ListaAluno();
    void incluiAluno(Aluno* pAluno);
    void listeAlunos();

};
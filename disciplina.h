#pragma once
#include "departamento.h"
#include "elAluno.h"

class Disciplina
{
private:
    int id;
    char nome[150];
    int n_alunos;
    int qtdd_alunos;
    Departamento* pDptoAssociado;
    ElAluno* pElAlunoPrim;
    ElAluno* pElAlunoUlt;    

public:
    Disciplina(int n_id = 0, const char* nome_disc = "", int n_a = 45, int qtdd_a = 0);
    ~Disciplina();
    void inicializa(int n_id, const char* nome_disc);
    void setId(int n_id);
    int getId();
    void setNome(const char* nome_disc);
    char* getNome();
    int getQtddAlunos();
    void setDptoAssociado(Departamento* pDpto);
    Departamento* getDptoAssociado();
    void incluiAluno(Aluno* pAluno);
    void listaAlunos();
};
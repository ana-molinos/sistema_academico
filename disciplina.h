#pragma once
#include "lista.h"
#include "aluno.h"

class Departamento;

class Disciplina
{
private:
    int id;
    MinhaString nome;
    Departamento* pDptoAssociado;  
    Lista<Aluno> objListaAlunos;    

public:
    Disciplina(int n_id = 0, const char* nome_disc = "");
    ~Disciplina();
    void inicializa(int n_id, const char* nome_disc);
    void setId(int n_id);
    int getId();
    void setNome(const char* nome_disc);
    MinhaString getNome();
    void setDptoAssociado(Departamento* pDpto);
    Departamento* getDptoAssociado();
    void incluiAluno(Aluno* pAluno);
    void listaAlunos();
};
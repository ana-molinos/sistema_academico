#pragma once
#include "listaAluno.h"
class Departamento;

class Disciplina{
private:
    int id;
    char nome[150];
    Departamento* pDptoAssociado;  
    ListaAluno objListaAlunos;    

public:
    Disciplina(int n_id = 0, const char* nome_disc = "");
    ~Disciplina();
    void inicializa(int n_id, const char* nome_disc);
    void setId(int n_id);
    int getId();
    void setNome(const char* nome_disc);
    char* getNome();
    void setDptoAssociado(Departamento* pDpto);
    Departamento* getDptoAssociado();
    void incluiAluno(Aluno* pAluno);
    void listaAlunos();
};
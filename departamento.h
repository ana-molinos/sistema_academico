#pragma once
#include "lista.h"
#include "minhaString.h"

class Universidade;
class Disciplina;
//Redefinição das classes Universidade e Disciplina. (serve para evitar o include recursivo!) 
//(universidade.h e disciplina.h incluem departamento.h, logo departamento.h não pode incluir 
//universidade.h nem disciplina.h)

class Departamento{

private:
    int id;
    MinhaString nome;
    Universidade *pUniv;
    Lista<Disciplina> objListaDisciplinas;

public:
    Departamento(int n_id = 0, const char* nome_dpto = "");
    ~Departamento();
    int getId();
    void setNome(const char* n);
    MinhaString getNome();
    void setUniv(Universidade* pU);
    void incluiDisciplina(Disciplina* pDisc);
    void listaDisciplinas();

};
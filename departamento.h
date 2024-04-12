#pragma once
//#include "universidade.h"

class Universidade;
class Disciplina;
class ElDisciplina;
//Redefinição das classes Universidade e Disciplina. (serve para evitar o include recursivo!) 
//(universidade.h e disciplina.h incluem departamento.h, logo departamento.h não pode incluir 
//universidade.h nem disciplina.h)

class Departamento{

private:
    int id;
    char nome[100];
    Universidade *pUniv;
    ElDisciplina* pElDiscPrim;
    ElDisciplina* pElDiscUlt;

public:
    Departamento(int n_id = 0, const char* nome_dpto = "");
    ~Departamento();
    int getId();
    void setNome(const char* n);
    char* getNome();
    void setUniv(Universidade* pU);
    void incluiDisciplina(Disciplina* pDisc);
    void listaDisciplinas();

};
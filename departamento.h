#pragma once
//#include "universidade.h"

class Universidade;
//Redefinição da classe Universidade. (serve para evitar o include recursivo!) 
//(universidade.h inclui departamento.h, logo departamento.h não pode incluir universidade.h)

class Departamento{

private:
    int id;
    char nome[100];
    Universidade *pUniv;

public:
    Departamento(int n_id = 0, const char* nome_dpto = "");
    ~Departamento();
    int getId();
    void setNome(const char* n);
    char* getNome();
    void setUniv(Universidade* pU);

};
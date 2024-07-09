#pragma once
#include "lista.h"
#include "aluno.h"

class ListaAluno{
private:
    Lista<Aluno> lista;

public:
    ListaAluno();
    ~ListaAluno();
    void incluiAluno(Aluno* pAluno);
    void listaAlunos();
    void limpaListaAlunos();
};
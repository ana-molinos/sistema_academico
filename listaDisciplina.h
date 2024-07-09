#pragma once
#include "lista.h"
#include "disciplina.h"

class ListaDisciplina{
private:
    Lista<Disciplina> lista;

public:
    ListaDisciplina();
    ~ListaDisciplina();
    void incluiDisciplina(Disciplina* pDisc);
    void listaDisciplinas();
    void limpaListaDisciplinas();
};
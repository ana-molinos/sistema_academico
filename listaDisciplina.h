#pragma once
#include "elemento.h"
#include "disciplina.h"

class ListaDisciplina{
private:
    Elemento<Disciplina>* pDiscPrim;
    Elemento<Disciplina>* pDiscUlt;

public:
    ListaDisciplina();
    ~ListaDisciplina();
    void incluiDisciplina(Disciplina* pDisc);
    void listeDisciplinas();
};
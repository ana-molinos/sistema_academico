#pragma once
#include "elDisciplina.h"
#include "disciplina.h"

class ListaDisciplina{
private:
    ElDisciplina* pElDiscPrim;
    ElDisciplina* pElDiscUlt;

public:
    ListaDisciplina();
    ~ListaDisciplina();
    void incluiDisciplina(Disciplina* pDisc);
    void listeDisciplinas();
};
#pragma once
#include "disciplina.h"

class ElDisciplina{
private:
    Disciplina* pDisc;
    ElDisciplina* pElDiscAnt;
    ElDisciplina* pElDiscProx;

public:
    ElDisciplina();
    ~ElDisciplina();
    void setpDisc(Disciplina* pD);
    Disciplina* getpDisc();
    void setpElDiscAnt(ElDisciplina* pElDisc);
    ElDisciplina* getpElDiscAnt();
    void setpElDiscProx(ElDisciplina* pElDisc);
    ElDisciplina* getpElDiscProx();
    char* getNome();
    int getId();
};
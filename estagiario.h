#pragma once
#include "aluno.h"

class Estagiario : public Aluno{
private:
    float bolsa;

public:
    Estagiario(int diaNa, int mesNa, int anoNa, const char* nome = "", int ra = -1, float valor = 0.0);
    Estagiario();
    ~Estagiario();
    void informaProventos();
    void setBolsa(float valor);
    float getBolsa();
};
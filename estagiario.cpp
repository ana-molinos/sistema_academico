#include "estagiario.h"
#include "iostream"
using namespace std;

Estagiario::Estagiario(int diaNa, int mesNa, int anoNa, const char* nome, int ra, float valor):
Aluno(diaNa, mesNa, anoNa, nome, ra)
{
    setBolsa(valor);
}

Estagiario::Estagiario()
{

}

Estagiario::~Estagiario()
{

}

void Estagiario::informaProventos()
{
    cout << nomeP << ", aluno registrado sob o n. " << raAluno << " recebe R$ ";
    printf("%.2f\n", bolsa);
}

void Estagiario::setBolsa(float valor)
{
    bolsa = valor;
}

float Estagiario::getBolsa()
{
    return bolsa;
}
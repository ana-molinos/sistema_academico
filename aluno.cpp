#include "aluno.h"
#include <iostream>
using namespace std;


Aluno::Aluno(int diaNa, int mesNa, int anoNa, const char* nome, int ra):
Pessoa(diaNa, mesNa, anoNa, nome)
{
    raAluno = ra;
}

Aluno::Aluno():
Pessoa()
{
    raAluno = -1;
}

Aluno::~Aluno()
{

}

void Aluno::setRaAluno(int ra)
{
    raAluno = ra;
}

int Aluno::getRaAluno()
{
    return raAluno;
}

void Aluno::imprimeDadosAlunos()
{
    cout << "Aluno: " << nomeP << " - Registro academico: " << raAluno << endl;
}
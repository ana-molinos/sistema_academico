#include "elAluno.h"
#include <iostream>
#include "minhaString.h"
using namespace std;

ElAluno::ElAluno(){
    pAluno = NULL;
    pElAlunoAnt = NULL;
    pElAlunoProx = NULL;
}

ElAluno::~ElAluno(){
    pAluno = NULL;
    pElAlunoAnt = NULL;
    pElAlunoProx = NULL;
}

void ElAluno::setpAluno(Aluno* pA){
    pAluno = pA;
}

Aluno* ElAluno::getpAluno(){
    return pAluno;
}

void ElAluno::setpElAlunoAnt(ElAluno* pElAluno){
    pElAlunoAnt = pElAluno;
}

ElAluno* ElAluno::getpElAlunoAnt(){
    return pElAlunoAnt;
}

void ElAluno::setpElAlunoProx(ElAluno* pElAluno){
    pElAlunoProx = pElAluno;
}

ElAluno* ElAluno::getpElAlunoProx(){
    return pElAlunoProx;
}

char* ElAluno::getNome(){
    return pAluno->getNome();
}

int ElAluno::getRa(){
    return pAluno->getRaAluno();
}
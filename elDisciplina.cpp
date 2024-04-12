#include "elDisciplina.h"
#include <iostream>
using namespace std;

ElDisciplina::ElDisciplina(){
    pDisc = NULL;
    pElDiscAnt = NULL;
    pElDiscProx = NULL;
}

ElDisciplina::~ElDisciplina(){
    pDisc = NULL;
    pElDiscAnt = NULL;
    pElDiscProx = NULL;
}

void ElDisciplina::setpDisc(Disciplina* pD){
    pDisc = pD;
}

Disciplina* ElDisciplina::getpDisc(){
    return pDisc;
}

void ElDisciplina::setpElDiscAnt(ElDisciplina* pElDis){
    pElDiscAnt = pElDis;
}

ElDisciplina* ElDisciplina::getpElDiscAnt(){
    return pElDiscAnt;
}

void ElDisciplina::setpElDiscProx(ElDisciplina* pElDisc){
    pElDiscProx = pElDisc;
}

ElDisciplina* ElDisciplina::getpElDiscProx(){
    return pElDiscProx;
}

char* ElDisciplina::getNome(){
    return pDisc->getNome();
}

int ElDisciplina::getId(){
    return pDisc->getId();
}
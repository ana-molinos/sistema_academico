#include "disciplina.h"
#include <string.h>

Disciplina::Disciplina(int n_id, const char* nome_disc){
    id = n_id;
    strcpy(nome, nome_disc);
}

Disciplina::~Disciplina(){

}

void Disciplina::setId(int n_id){
    id = n_id;
}

int Disciplina::getId(){
    return id;
}

void Disciplina::setNome(const char* nome_Disc){
    strcpy(nome, nome_Disc);
}

char* Disciplina::getNome(){
    return nome;
}

void Disciplina::setDptoAssociado(Departamento* pDpto){
    pDptoAssociado = pDpto;
}
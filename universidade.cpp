#include "universidade.h"
#include <string.h>

Universidade::Universidade(const char* nome){
    strcpy(nomeUniv, nome);
    pDpto = NULL;
}

Universidade::~Universidade(){

}

void Universidade::setNome(const char* nome){
    strcpy(nomeUniv, nome);
}

char* Universidade::getNome(){
    return nomeUniv;
}

void Universidade::setDpto(Departamento* pD){
    pDpto = pD;
}
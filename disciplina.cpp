#include "disciplina.h"
#include <string.h>

Disciplina::Disciplina(int n_id, const char* nome_disc){
    id = n_id;
    strcpy(nome, nome_disc);
    pDiscProx = NULL;
    pDiscAnt = NULL;
}

Disciplina::~Disciplina(){
    pDiscProx = NULL;
    pDiscAnt = NULL;
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

    pDpto->incluiDisciplina(this);
    //chama o método inclui disciplina do departamento referenciado passando como parametro o endereço
    //do objeto disciplina que está sendo executado no momento (this é um ponteiro de alto nível);
}

Departamento* Disciplina::getDptoAssociado()
{
    return pDptoAssociado;
}

void Disciplina::setpDiscProx(Disciplina* pDisc)
{
    pDiscProx = pDisc;
}

Disciplina* Disciplina::getpDiscProx()
{
    return pDiscProx;
}

void Disciplina::setpDiscAnt(Disciplina* pDisc)
{
    pDiscAnt = pDisc;
}

Disciplina* Disciplina::getpDiscAnt()
{
    return pDiscAnt;
}